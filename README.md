# Rotary_Encoder_test

This example shows how to use a rotary encoder like the PEC11.

Turn the knob clockwise to decrease blinking rate, counterclockwise to increase.

* Maximum limit : 1 sec
* Minimum limit : 20 ms

## Fine tuning

Some encoders have detents and it can lead to instable results. This is why it it recommended to use *Half Resolution Mode* (see below). In this case, there will be 24 steps per 360° Rotation (PEC11R-xxxxx-x0024). Choose the stable edge by setting interrupts on RISING **or** FALLING edges.

This problem does not arise when using encoders without detents. You can even increase the resolution by setting interrupts on RISING **and** FALLING edges as shown in the following diagram *Full Resolution Mode* :


```
   D   H   D   H   D   H   D   H
   |  _.___|_  .   |  _.___|_  .
A _|_/ .   | \_.___|_/ .   | \_.___
   |   .  _|___._  |   .  _|___._     CW Rotation 
B _|___._/ |   . \_|___._/ |   . \_
   |   .   |   .   |   .   |   .
   | 1 .   |   .   | 2 .   |   .      Half Res Interrupts
   | 1 .   | 2 .   | 3 .   | 4 .      Full Res Interrupts
```
