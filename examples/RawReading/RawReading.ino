#include <HCSR04UltraSonic.h>

#define TRIGGER_PIN 4
#define ECHO_PIN 5

HCSR04UltraSonic HCSR04(TRIGGER_PIN, ECHO_PIN, 10000);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  unsigned long distance = HCSR04.timing();
  Serial.println(distance);
  delay(100);
}