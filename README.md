# CTD System ROS 2

Projekt przedstawia system akwizycji danych z czujnika **Valeport-Teledyne MonitorCTD+**, zbudowany w oparciu o **ROS 2 Humble**, dwa mikrokontrolery **ESP32**, własne interfejsy ROS 2 oraz webowy panel monitoringu napisany w Pythonie z użyciem **Flask**.

MonitorCTD+ komunikuje się z otoczeniem przez protokół **RS232**. Po podłączeniu przez konwerter RS232–UART możliwa jest komunikacja z dowolnym mikrokontrolerem obsługującym UART. Zarówno transmisja danych, jak i zasilanie pochodzi z samego urządzenia MonitorCTD+. ESP32 na starcie konfiguruje urządzenie przez wysłanie odpowiednich komend inicjalizacyjnych, a następnie rozpoczyna zbieranie danych — wystawia węzły ROS 2 przez sieć Wi-Fi, przetwarza odczyty do własnego formatu wiadomości, udostępnia sterowanie akwizycją przez serwis ROS 2, realizuje sesje czasowe przez akcje ROS 2 oraz prezentuje dane w panelu WWW.

---

## Zakres projektu

- **Topics** — odbiór surowych danych, publikacja przetworzonych pomiarów oraz wysyłanie komend start/stop.
- **Launch file** — uruchamia główne węzły systemu jednym poleceniem.
- **Service / Client** — sterowanie rozpoczęciem i zatrzymaniem akwizycji.
- **Własne interfejsy ROS 2** — dedykowana wiadomość, serwis i akcja.
- **Action** — realizacja czasowej sesji zbierania danych z monitorowaniem postępu.
- **Web UI** — panel podglądu pomiarów i sterowania systemem w czasie rzeczywistym.
- **Docker / Docker Compose** — konteneryzacja środowiska uruchomieniowego.
- **Firmware ESP32** — miejsce na szkice dla obu urządzeń używanych w systemie.

---

## Architektura

| Węzeł | Rola |
|---|---|
| `sensor_bridge` | Odbiera surowe dane z ESP32 i publikuje przetworzone wiadomości `CtdMeasurement` |
| `command_service` | Udostępnia serwis `set_acquisition` do włączania i wyłączania akwizycji |
| `acquire_action_server` | Realizuje akcję `AcquireData` — uruchamia akwizycję na zadany czas, monitoruje napływ próbek i zatrzymuje ją po upływie sesji |
| `web_app` | Prezentuje dashboard WWW, korzysta z serwisu i akcji jako klient ROS 2 |
| `microros_agent` | Osobny kontener do komunikacji z urządzeniami micro-ROS |

---

## Interfejsy ROS 2

Pakiet `ctd_interfaces` definiuje własne typy wykorzystywane w projekcie.

### Wiadomość `CtdMeasurement`

Przenosi pojedynczy pomiar z czujnika CTD:

| Pole | Opis |
|---|---|
| `sensor_id` | Identyfikator czujnika |
| `stamp` | Znacznik czasu pomiaru |
| `temperature` | Temperatura |
| `conductivity` | Przewodność |
| `pressure` | Ciśnienie |
| `turbidity` | Zmętnienie |
| `valid` | Flaga poprawności danych |
| `raw_line` | Surowa linia danych z urządzenia |

### Serwis `SetAcquisition`

Steruje akwizycją danych:

**Request:** `target`, `enable`
**Response:** `success`, `message`

### Akcja `AcquireData`

Realizuje czasową sesję akwizycji:

**Goal:** `target`, `duration_sec`
**Result:** `success`, `summary`
**Feedback:** `progress`, `status`

---

## Przepływ danych

1. ESP32 publikuje surowe dane pomiarowe.
2. `sensor_bridge` parsuje dane i publikuje wiadomości `CtdMeasurement`.
3. `web_app` subskrybuje przetworzone dane i aktualizuje dashboard.
4. Użytkownik może z poziomu UI wywołać START/STOP przez serwis.
5. Użytkownik może uruchomić czasową sesję akwizycji przez akcję.
6. Akcja wysyła komendę START, monitoruje liczbę odebranych próbek i po upływie czasu wykonuje STOP.

---

## Struktura repozytorium

```text
ros2_humble_ws/
├── Dockerfile
├── docker-compose.yml
├── firmware/
│   ├── esp32_1/
│   └── esp32_2/
├── src/
│   ├── ctd_interfaces/
│   └── ctd_system/
├── build/
├── install/
└── log/
```

---

## Uruchomienie

### Lokalnie

**Wymagania:** Ubuntu z ROS 2 Humble, `colcon`, Python z Flask.

```bash
cd ~/ros2_humble_ws/ws
colcon build --packages-select ctd_interfaces ctd_system
source install/setup.bash
ros2 launch ctd_system system.launch.py
```

Panel WWW dostępny pod adresem: **http://localhost:5001**

---

### Docker

```bash
docker build -t ctd_app .
docker run -it --rm --name ctd_app -p 5001:5000 ctd_app
```

---

### Docker Compose (z micro-ROS Agent)

```bash
docker compose up --build   # uruchomienie
docker compose down         # zatrzymanie
```

| Port | Usługa |
|---|---|
| `5001/tcp` | Web application |
| `8888/udp` | micro-ROS Agent |

---

## Firmware ESP32
Katalog `firmware/`  zawiera szkice Arduino IDE dla urządzeń ESP32 działających jako węzły micro-ROS.
Firmware esp32_x realizuje następujące zadania:

Inicjalizuje czujnik MonitorCTD+ przez UART2 (RS232), wysyłając sekwencję komend startowych (tryb ciągły 4 Hz, zerowanie, START).
Łączy się z brokerem micro-ROS przez Wi-Fi (UDP) i rejestruje węzeł ROS 2.
Publikuje surowe linie danych z czujnika na topicu ctd_raw jako std_msgs/String.
Subskrybuje topic start_stop (std_msgs/Bool) — umożliwia zdalne włączanie i wyłączanie transmisji danych.
