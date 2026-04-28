# BRIDGE-SMART-NOVA-SOLUTIONS-28-4-2026
Component used :
-resistor
-buzzer
-ldr
-LED
-arduino uno

how the Project Works:
The LDR senses light intensity
In bright light → low resistance
In darkness → high resistance
The LDR is connected in a voltage divider circuit, sending an analog signal to the Arduino.
The Arduino reads the light level using an analog pin (like A0).
Based on a preset threshold:
 Bright condition → LEDs OFF, buzzer OFF
 Dark condition → LEDs ON and buzzer ON
 Purpose of the Project:

This setup can be used as:

Automatic night alarm system
Darkness detector
Basic security alert system
Smart lighting control prototype
