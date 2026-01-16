#include <Arduino.h>
#include <PinsManager.h>

void setupSensor();
void setupRelay();

void setup() {
  setupSensor();
  setupRelay();

  pins.init();
}

void loop() {
  int value = analogRead(pins.getInputPin(0));
  digitalWrite(pins.getOutputPin(0), value > 500 ? HIGH : LOW);
}
