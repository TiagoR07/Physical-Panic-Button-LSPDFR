<p align="center">
  <img src="https://raw.githubusercontent.com/TiagoR07/Physical-Panic-Button-LSPDFR/main/Icon.png" alt="Physical Panic Button icon" width="300">
</p>

# Physical Panic Button for LSPDFR

A physical panic button integration for LSPDFR using Arduino and Python.  
This project allows you to trigger the panic button in Grand Theft Auto V with the LSPDFR mod and the Ultimate Backup plugin by pressing a physical button connected to an Arduino, which communicates with a Python helper script.

## Features

- Physical push button connected to an Arduino
- Python script listens for serial input from the Arduino
- Triggers the LSPDFR panic button by simulating the configured key combination
- Fully configurable keybind, default example is CTRL + F11
- Optional buzzer and LED feedback for increased immersion
- Simple and immersive hardware to game integration

## Hardware Requirements

- Arduino board, for example Uno or Nano
- Push button
- Buzzer, optional but recommended for more immersion
- LED, optional but recommended for more immersion
- Jumper wires
- Breadboard, optional but recommended

## Software Requirements

- Python 3
- Arduino IDE
- Grand Theft Auto V
- LSPDFR mod
- Ultimate Backup plugin

## How It Works

1. The Arduino detects a button press.
2. The Arduino sends a signal over the serial connection.
3. The Python script reads the signal.
4. The script simulates the configured panic button key combination.
5. LSPDFR receives the input and activates the panic event.

## Getting Started

1. Clone this repository.
2. Upload the Arduino sketch `PanicButton.ino` to your Arduino board.
3. Connect the button, LED and buzzer according to the wiring instructions in the code.
4. Run the Python helper script.
5. Launch GTA V with LSPDFR.

## Usage

Connect the Arduino and run:

`python PanicButtonHelper.py`

Once the script is running and the game window is focused, press the physical button to activate the panic button in LSPDFR.

## Customization

- Change the panic button key combination directly in the Python script.
- Modify the Arduino code to support multiple buttons or additional feedback devices.
- Adjust delays, sounds or LED behavior for different effects.

## Contributing

Contributions, improvements and bug fixes are welcome.  
Feel free to open an issue or submit a pull request.

## License

This project is licensed under the MIT License.  
See the `LICENSE` file for more information.
