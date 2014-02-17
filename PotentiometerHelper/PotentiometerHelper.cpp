#include "PotentiometerHelper.h"


Potentiometer::Potentiometer(byte pin) {
	this->pin = pin;
	pinMode(this->pin, INPUT);
}

float Potentiometer::getVoltage() {
	return analogRead(this->pin);
}

float Potentiometer::getVolume() {
	return (1023-analogRead(this->pin));
}

float Potentiometer::read(Potentiometer::Unit unit) {
	switch (unit)
    {
    case Potentiometer::VOLT:
        return getVoltage();
        break;
    case Potentiometer::VOLUME:
        return getVolume();
        break;
    }
}