#include <Arduino.h>
#include "Adafruit_CircuitPlayground.h"

void setup() {
  Serial.begin(115200);
  CircuitPlayground.begin();
}

void loop() {
  CircuitPlayground.redLED(HIGH);
  delay(500);
  CircuitPlayground.redLED(LOW);
  delay(500);
  Serial.print("Hello World!\n");
  float X = CircuitPlayground.motionX();
  Serial.print("Motion X: ");
  Serial.println(X);
}