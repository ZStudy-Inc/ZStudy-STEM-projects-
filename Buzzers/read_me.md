 #### Buzzer 

This project demonstrates how to control a piezo buzzer on the zstudy board. The buzzer is connected to pin 7 of the microcontroller, named `palse_beep`, and beeps in a sequence with increasing intervals. 
This project is great for beginners to understand how to use digital outputs and delays to create sound patterns.

# Components Used

- zstudy stem board
- Piezo buzzer
- Connecting wires
- Breadboard (optional)

# Circuit Design

Connect the buzzer to pin 7 of the Arduino. The negative leg of the buzzer should be connected to the ground (GND) of on the `zstudy board`.

# Source Code 

The Arduino code defines pin 7 as the output for the buzzer. In the `setup()` function, the pin is configured as an output. The `loop()` function then runs continuously, creating a pattern of beeps with intervals of 1 second, 2 seconds, and 3 seconds.

# How It Works

1. The buzzer beeps for 1 second, followed by a 1-second pause.
2. The buzzer then beeps for 2 seconds, followed by a 2-second pause.
3. Finally, the buzzer beeps for 3 seconds, followed by a 3-second pause.
4. The pattern repeats indefinitely.

This simple yet effective project teaches the basics of timing using the `zstudy stem kit`  and how to use a piezo buzzer to create audible alerts or signals.

# WHERE TO BUY COMPONENTS 
Zstudy computer online store ..visit web.zstudy.com