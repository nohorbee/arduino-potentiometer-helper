#include "PotenciometerHelper.h"


Potenciometer::Potenciometer(byte pin) {
	this->pin = pin;
	pinMode(this->pin, INPUT);
}

float Potenciometer::getVoltage() {
	return analogRead(this->pin);
}

float Potenciometer::getVolume() {
	return (1023-analogRead(this->pin));
}

float Potenciometer::read(Potenciometer::Unit unit) {
	switch (unit)
    {
    case Potenciometer::VOLT:
        return getVoltage();
        break;
    case Potenciometer::VOLUME:
        return getVolume();
        break;
    }
}