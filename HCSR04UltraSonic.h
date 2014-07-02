/*
 * HCSR04UltraSonic.h
 *
 *  Created on: 20 mars 2014
 *      Author: jeckel
 */

#ifndef HCSR04ULTRASONIC_H_
#define HCSR04ULTRASONIC_H_

#include <stddef.h>
#if defined(ARDUINO) && ARDUINO >= 100
  #include <Arduino.h>
#else
  #include <WProgram.h>
#endif

class HCSR04UltraSonic
{
public:
    bool _return_last_value_on_timeout = true;
    
    HCSR04UltraSonic(byte tp, byte ep, unsigned long timeout = 50000);
    long timing();
    float convert(long microsec);
    virtual ~HCSR04UltraSonic();
    int readDistance();
    void setTimeout(unsigned long timeout);
    void setNbReading(unsigned char nb_reading);
private:
    byte _trigPin;
    byte _echoPin;
    unsigned long _timeout;
    unsigned char _nb_reading = 1;
    unsigned long _last_value;
};

#endif /* HCSR04ULTRASONIC_H_ */
