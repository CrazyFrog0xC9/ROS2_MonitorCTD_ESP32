# MonitorCTD System ROS 2

Projekt przedstawia prosty system akwizycji danych CTD oparty o ROS 2 Humble, dwa urządzenia ESP32, własne interfejsy ROS oraz webowy panel monitoringu zbudowany we Flasku.

System zbiera dane z dwóch węzłów ESP32, przetwarza je do własnej wiadomości ROS, udostępnia sterowanie akwizycją przez Service, realizuje sesje czasowe przez Action i prezentuje dane w panelu WWW.

## Zakres projektu

Projekt obejmuje:

- Topics do odbioru surowych danych, publikacji danych przetworzonych i wysyłania komend start/stop.
- Launch file uruchamiający główne węzły systemu.
- Service-Client do sterowania rozpoczęciem i zatrzymaniem akwizycji.
- Własne interfejsy ROS 2: wiadomość, serwis i action.
- Action do realizacji czasowej sesji zbierania danych.
- Web UI do podglądu pomiarów i sterowania systemem.
- Docker i Docker Compose do uruchamiania środowiska.
- Miejsce na firmware ESP32 używany razem z systemem.

## Architektura

Główne elementy systemu:

- `sensor_bridge` odbiera surowe dane z ESP32 i publikuje przetworzoną wiadomość `CtdMeasurement`.
- `command_service` udostępnia serwis `set_acquisition`, który włącza lub wyłącza akwizycję.
- `acquire_action_server` realizuje action `AcquireData`, uruchamia akwizycję na zadany czas, monitoruje napływ próbek i zatrzymuje akwizycję po zakończeniu.
- `web_app` prezentuje dashboard WWW i korzysta z Service oraz Action jako klient ROS.
- `microros_agent` może być uruchamiany jako osobny kontener do komunikacji z urządzeniami micro-ROS.

## Interfejsy ROS 2

Pakiet `ctd_interfaces` definiuje własne typy używane w projekcie:

### Wiadomość `CtdMeasurement`

Przenosi pojedynczy pomiar CTD:

- `sensor_id`
- `stamp`
- `temperature`
- `conductivity`
- `pressure`
- `turbidity`
- `valid`
- `raw_line`

### Serwis `SetAcquisition`

Służy do sterowania akwizycją:

Request:
- `target`
- `enable`

Response:
- `success`
- `message`

### Action `AcquireData`

Realizuje sesję czasową akwizycji:

Goal:
- `target`
- `duration_sec`

Result:
- `success`
- `summary`

Feedback:
- `progress`
- `status`

## Przepływ danych

1. ESP32 publikuje surowe dane pomiarowe.
2. `sensor_bridge` odbiera dane raw, parsuje je i publikuje `CtdMeasurement`.
3. `web_app` subskrybuje przetworzone dane i aktualizuje dashboard.
4. Użytkownik może z poziomu UI wywołać START/STOP przez Service.
5. Użytkownik może uruchomić czasową akwizycję przez Action.
6. Action wysyła START, monitoruje liczbę odebranych próbek i po czasie wykonuje STOP.

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

## Uruchomienie lokalne

Wymagania:

- Ubuntu lub macOS z Dockerem i ROS 2 Humble
- `colcon`
- Python z Flaskiem

Budowanie workspace:

```bash
cd /Users/mikolaj/ros2_humble_ws
colcon build --packages-select ctd_interfaces ctd_system
source install/setup.bash
```

Uruchomienie systemu:

```bash
ros2 launch ctd_system system.launch.py
```

Po uruchomieniu panel WWW jest dostępny pod adresem:

```text
http://localhost:5000
```

## Uruchomienie w Dockerze

### Sam kontener aplikacji

Budowanie obrazu:

```bash
docker build -t ctd_app .
```

Uruchomienie:

```bash
docker run -it --rm --name ctd_app -p 5001:5000 ctd_app
```

Panel WWW:

```text
http://localhost:5001
```

### Docker Compose z micro-ROS Agent

W repozytorium znajduje się `docker-compose.yml`, który uruchamia:

- `ctd_app`
- `microros_agent`

Start:

```bash
docker compose up --build
```

Stop:

```bash
docker compose down
```

Porty:

- `5001/tcp` - web application
- `8888/udp` - micro-ROS Agent

## Firmware ESP32

Katalog `firmware/`zawiera szkice Arduino IDE dla urządzeń ESP32 działających jako węzły micro-ROS.
Firmware esp32_1 realizuje następujące zadania:

Inicjalizuje czujnik MonitorCTD+ przez UART2 (RS232), wysyłając sekwencję komend startowych (tryb ciągły 4 Hz, zerowanie, START).
Łączy się z brokerem micro-ROS przez Wi-Fi (UDP) i rejestruje węzeł ROS 2.
Publikuje surowe linie danych z czujnika na topicu ctd_raw jako std_msgs/String.
Subskrybuje topic start_stop (std_msgs/Bool) — umożliwia zdalne włączanie i wyłączanie transmisji danych.


