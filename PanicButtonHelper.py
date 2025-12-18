import serial
import time
from pynput.keyboard import Controller, Key, Listener

ser = serial.Serial('COM3', 9600, timeout=0.1)

kb = Controller()
running = True
key_pressed = False

def on_press(key):
    global key_pressed
    if key == Key.f3:
        key_pressed = True

listener = Listener(on_press=on_press)
listener.start()

while running:
    line = ser.readline().decode('utf-8').strip()

    if line == "ButtonPressed":
        kb.press(Key.ctrl)
        time.sleep(0.1)
        kb.press(Key.f11)
        time.sleep(0.1)
        kb.release(Key.f11)
        kb.release(Key.ctrl)

    if key_pressed:
        print("F3 was pressed! Exiting.")
        break

listener.stop()
