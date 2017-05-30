# Rotary_Encoder_test

This example shows how to use a rotary encoder like the PEC11.

Turn the knob clockwise to decrease blinking rate, counterclockwise to increase.

Maximum limit : 1 sec

Minimum limit : 20 ms

## 

`
   D   H   D   H   D   H   D   H
   |  _.___|_  .   |  _.___|_  .
A _|_/ .   | \_.___|_/ .   | \_.___
   |   .  _|___._  |   .  _|___._   CW Rotation
B _|___._/ |   . \_|___._/ |   . \_
   |   .   |   .   |   .   |   .
   |  _.___|_  .   |  _.___|_  .
A _|_/ .   | \_.___|_/ .   | \_.___
  _|___._  |   .  _|___._  |   .  _ CCW Rotation
B  |   . \_|___._/ |   . \_|___._/
   |   .   |   .   |   .   |   .
   | 1 .   |   .   | 1 .   |   .   Half Res Interrupts
   | 1 .   | 1 .   | 1 .   | 1 .   Full Res Interrupts
   | 1 . 2 | 1 . 2 | 1 . 2 | 1 . 2 Double Res Interrupts
`