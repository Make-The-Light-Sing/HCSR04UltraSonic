#include <HCSR04UltraSonic.h>

#define TRIGGER_PIN 4
#define ECHO_PIN 5

HCSR04UltraSonic HCSR04(TRIGGER_PIN, ECHO_PIN, 200000);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int distance = HCSR04.readDistance();
  Serial.println(distance);
  delay(1000);
}