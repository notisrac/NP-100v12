/*
 * Tube amp controller
 * Controlls the tube led and the output relay.
 * noti, 2017
 *
 */


uint8_t pinLed = 0;
uint8_t pinRelay = 1;
unsigned long elapsedTime = 0;


void cosine_pulse(int pin, float time_step, int pause) {
	for (float t = 0; t < 2 * PI; t += time_step) {
		float value = (cos(t - PI)*0.5 + 0.5) * 250;
		analogWrite(pin, value + 5);
		delay(pause);
	}
}

void setup()
{
	pinMode(pinLed, OUTPUT);
	pinMode(pinRelay, OUTPUT);

	digitalWrite(pinLed, LOW);
	digitalWrite(pinRelay, LOW);
}

void loop()
{
	elapsedTime = millis();
	if (elapsedTime < 60000)
	{
		cosine_pulse(pinLed, 0.0025, 1);
	}
	else
	{
		digitalWrite(pinRelay, HIGH);
		digitalWrite(pinLed, HIGH);
	}
}
