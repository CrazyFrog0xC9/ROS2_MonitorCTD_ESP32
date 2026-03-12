import threading

latest = {
    "esp32_1": {"raw": None, "parsed": {}, "running": None},
    "esp32_2": {"raw": None, "parsed": {}, "running": None},
}

latest_lock = threading.Lock()


def parse_ctd_line(line: str):
    if not line:
        return {}
    s = line.strip()
    parts = [p for p in s.split("\t") if p != ""]
    out = {}
    for i in range(0, len(parts) - 1, 2):
        val_str = parts[i]
        unit = parts[i + 1]
        try:
            out[unit] = float(val_str)
        except Exception:
            out[unit] = None
    return out
