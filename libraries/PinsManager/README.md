[Français](README.fr.md)

# PinsManager

PinsManager is a lightweight Arduino library designed to centralize and simplify pin configuration across multiple files.

Instead of calling `pinMode()` everywhere, you declare your input and output pins wherever needed, then initialize everything once in `setup()`.

---

## ✨ Features

- Centralized pin declaration
- Clean separation between logic and hardware configuration
- Works across multiple `.ino`, `.h`, and `.cpp` files
- Simple and minimal API
- No dynamic memory allocation

---

## 📦 Installation

1. Go to the [versions folder](../zip/PinsManager/) and Download the latest version
2. Copy the `PinsManager` folder into your Arduino `libraries` directory
3. Restart the Arduino IDE
4. Include the library in your code:

```cpp
#include <PinsManager.h>
```

---

## 🚀 How It Works

1. Declare input and output pins anywhere in your project
2. Call pins.init() once in setup()
3. All pins are initialized automatically

---

## 🧪 Examples 

- Single file usage
- Multiple files (Button + LED)
- Multiple Modules (Sensor + Relay)

---

## ⚠️ Notes

- Default maximum number of input pins: **20**
- Default maximum number of output pins: **20**
- The maximum number of pins can be customized at compile time using a `#define`
- To override the default value, define `MAX_PINS` **before** including `PinsManager.h`
  - Example
    ```cpp
    #define MAX_PINS 10
    #include <PinsManager.h
    ```

- Pins are initialized only when pins.init() is called
- All addInput() and addOutput() calls must be done before calling init()
- No bounds checking is performed when accessing pins by index