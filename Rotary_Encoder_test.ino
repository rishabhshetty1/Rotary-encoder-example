#include "Arduino.h"

#define PIN_A 0
#define PIN_B 1

#define MAX 100
#define MIN 2

volatile int counter = 50;

void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);

	pinMode(PIN_A, INPUT);
	pinMode(PIN_B, INPUT);

	attachInterrupt(digitalPinToInterrupt(PIN_A), intA, RISING);
	attachInterrupt(digitalPinToInterrupt(PIN_B), intB, RISING);
}

void loop()
{
	digitalWrite(LED_BUILTIN, HIGH);
	delay(10*counter); 					// delay time from 20 to 500 ms
	digitalWrite(LED_BUILTIN, LOW);
	delay(10*counter); 					// delay time from 20 to 500 ms
}

void intA()
{
	if (digitalRead(PIN_B) == LOW)
	{
		counter++;
		if (counter > MAX)
		{
			counter = MAX;
		}
	}
	else
	{
		counter--;
		if (counter < MIN)
		{
			counter = MIN;
		}
	}
	delayMicroseconds(500);
}

void intB()
{
	if (digitalRead(PIN_A) == LOW)
	{
		counter--;
		if (counter < MIN)
		{
			counter = MIN;
		}
	}
	else
	{
		counter++;
		if (counter > MAX)
		{
			counter = MAX;
		}
	}
	delayMicroseconds(500);
}
