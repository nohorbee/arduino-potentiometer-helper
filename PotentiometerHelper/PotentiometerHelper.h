#ifndef POTENTIOMETER_H;
#define POTENTIOMETER_H;

#include <Arduino.h>

class Potentiometer {
  private: 
  	byte pin;
  public:
  	enum Unit { VOLT, VOLUME }; // Use Potentiometer::VOLT or Potentiometer::LUX
    Potentiometer(byte pin);
    float getVoltage();
    float getVolume();
    float read(Potentiometer::Unit unit);
};

#endif