# 🚀 ESP32 Multi-Servo Control System

## 🌟 Project Overview
Experience **fluid, precision-controlled servo motion** with the **ESP32**! This project enables seamless control of **single or multiple servos**, allowing smooth transitions between angles to prevent mechanical stress and achieve professional-grade motion.

### Built With
- **ESP32** microcontroller for high-performance PWM control
- **ESP32Servo library** for accurate servo handling
- Custom modules:
  - `Speed_Control.h` — smooth, adjustable speed movement
  - `Multi_Servo.h` — efficient multi-servo management

---

## ⚡ Key Features
- Smooth, speed-adjustable servo motion
- Control one or multiple servos at once
- Simple, intuitive initialization functions
- Configurable PWM frequency and pulse width
- Lightweight, modular, and easily extendable

---

## 🛠 Hardware Requirements
- ESP32 development board
- Servo motors (1–4)
- External power supply recommended for servos
- Jumper wires & breadboard (optional)

---

## 💻 Software Requirements
- **PlatformIO** (VSCode recommended)
- Libraries:
  - `ESP32Servo`

---

## 🏗 PlatformIO Project Setup
1. **Create a new PlatformIO project** targeting your ESP32 board.
2. Place your files in the `src/` folder:
   - `main.cpp` (main Arduino code)
3. Place library files in:
   - `lib/Speed_Control/` → `Speed_Control.h`, `Speed_Control.cpp`
   - `lib/Multi_Servo/` → `Multi_Servo.h`, `Multi_Servo.cpp`
4. Configure `platformio.ini`:
```ini
[env:esp32doit-devkit-v1]
platform = espressif32
board = esp32doit-devkit-v1
framework = arduino
lib_deps = madhephaestus/ESP32Servo@^3.0.5
lib_extra_dirs = lib/Speed_Control lib/Multi_Servo
monitor_speed = 115200
```
5. Connect your ESP32 and build/upload your project.

---

## 🔌 Pin Configuration
| Servo | ESP32 Pin |
|-------|-----------|
| Servo 1 | 14        |
| Servo 2 | 15        |
| Servo 3 | 16        |
| Servo 4 | 17        |

> Adjust `servppins[]` in your code to match your hardware setup.

---

## 🚀 Usage

### Initialization
- **Single Servo:**
```cpp
Single_Servo_init(myservo, servoPin);
```
- **Multiple Servos:**
```cpp
Multi_Servos_init(myserv, servppins);
```

### Speed-Controlled Movement
- **Single Servo:**
```cpp
Speed_Control_Single(speed, target_angle, servoPin, myservo, &prev_sin);
```
- **Multiple Servos:**
```cpp
Speed_Control_Multi(&speed, angles, servppins, myserv, &prev_mul);
```

**Parameters:**
- `speed`: 0–100 (adjustable speed)
- `target_angle` / `angles[]`: Desired positions (0–180°)
- `servoPin` / `servppins[]`: GPIO pin assignments
- `myservo` / `myserv[]`: Servo objects
- `prev_sin` / `prev_mul`: Timestamp memory for smooth motion

> Optional: `instat = true` enables smooth transition, default is `false` for instant movement.

---

## 🔄 Example Loop
```cpp
void loop() {
    Speed_Control_Single(50, 180, servoPin, myservo, &prev_sin);
    Speed_Control_Multi(&speed, angles, servppins, myserv, &prev_mul);
}
```
- Single servo moves to 180° at medium speed.
- Multiple servos move according to `angles[]`.

---

## ⚠️ Notes
- Use an **external power supply** for multiple servos to avoid overloading the ESP32.
- Ensure common ground between ESP32 and servo power supply.
- Adjust `interval` in `Speed_Control.h` to refine motion smoothness.

---

## 💡 Why Choose This Project
- Clean, modular, and professional-grade code
- Independent speed control for multiple servos
- Reduces mechanical wear with smooth motion
- Perfect foundation for robotics, automation, or advanced servo projects

---

