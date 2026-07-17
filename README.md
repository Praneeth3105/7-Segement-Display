# 🔢 Seven Segment Display Counter using Arduino (Wokwi)

A simple Arduino project that demonstrates how to interface a **Common Cathode 7-Segment Display** with an Arduino Uno using the **Wokwi Simulator**. The program automatically counts from **0 to 9**, displaying each digit for one second while printing the current value to the Serial Monitor.

---

## 📌 Project Overview

This project is designed to help beginners understand how a 7-segment display works and how each segment can be controlled individually using Arduino digital pins.

The program stores the segment patterns for digits **0–9** in a two-dimensional array and displays them sequentially.

---

## ✨ Features

- Displays digits from **0 to 9**
- Uses a Common Cathode 7-Segment Display
- Prints the displayed digit on the Serial Monitor
- Beginner-friendly Arduino code
- Simulated using the Wokwi IoT Simulator

---

## 🛠 Technologies Used

- Arduino Uno
- Embedded C / Arduino IDE
- Wokwi Simulator
- 7-Segment Display
- Serial Monitor

---

## 📂 Repository Structure

```
Seven-Segment-Display-Counter/
│
├── sketch.ino
├── diagram.json
├── wokwi.toml
├── README.md
└── images/
    ├── circuit.png
    └── output.png
```

---

## 🔌 Components Required

- Arduino Uno
- Common Cathode 7-Segment Display
- 220Ω Resistors (optional for hardware implementation)
- Jumper Wires

---

## 🔗 Pin Connections

| Arduino Pin | Segment |
|-------------|---------|
| D2 | a |
| D3 | b |
| D4 | c |
| D5 | d |
| D6 | e |
| D7 | f |
| D8 | g |
| D9 | Common Cathode |

---

## ▶️ How to Run

### Using Wokwi

1. Clone this repository.

```bash
git clone https://github.com/your-username/Seven-Segment-Display-Counter.git
```

2. Open the project in Wokwi.

3. Start the simulation.

4. Observe the 7-segment display counting from **0 to 9**.

5. Open the Serial Monitor to view the currently displayed number.

---

## 🌐 Wokwi Simulation

You can run the project directly using the Wokwi simulator:

**https://wokwi.com/projects/436479064962862081**

---

## 💻 Program Workflow

1. Initialize all segment pins as OUTPUT.
2. Enable the common cathode pin.
3. Store segment patterns for digits 0–9.
4. Display each digit sequentially.
5. Print the current digit to the Serial Monitor.
6. Repeat the counting process continuously.

---

## 📸 Output

The project displays:

- Digits **0 → 9** on the 7-segment display
- Current digit on the Serial Monitor
- Automatic counting every second

---

## 📚 Learning Outcomes

This project helps in understanding:

- Arduino Digital Output Pins
- 7-Segment Display Interfacing
- Arrays in Arduino Programming
- Functions and Loops
- Embedded Systems Basics
- IoT Simulation using Wokwi

---

## 🚀 Future Improvements

- Push Button Counter
- Up/Down Counter
- Stopwatch
- Digital Clock
- Countdown Timer
- Multi-Digit 7-Segment Display
- ESP32 Integration

---

## 🤝 Contributing

Contributions and suggestions are welcome.

1. Fork this repository.
2. Create a new feature branch.
3. Commit your changes.
4. Push to GitHub.
5. Open a Pull Request.

---

