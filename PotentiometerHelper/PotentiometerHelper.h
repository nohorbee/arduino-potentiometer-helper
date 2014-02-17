#ifndef POTENCIOMETER_H;
#define POTENCIOMETER_H;

#include <Arduino.h>

class Potenciometer {
  private: 
  	byte pin;
  public:
  	enum Unit { VOLT, VOLUME }; // Use PhotoResistor::VOLT or PhotoResistor::LUX
    Potenciometer(byte pin);
    float getVoltage();
    float getVolume();
    float read(Potenciometer::Unit unit);
};

#endif