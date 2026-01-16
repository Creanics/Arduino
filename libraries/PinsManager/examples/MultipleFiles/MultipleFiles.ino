#include <Arduino.h>
#include <PinsManager.h>
#include "Button.h"
#include "Led.h"

void setup() {
  setupButton();
  setupLed();

  pins.init();
}

void loop() {
  if (digitalRead(pins.getInputPin(0)) == HIGH) {
    digitalWrite(pins.getOutputPin(0), HIGH);
  } else {
    digitalWrite(pins.getOutputPin(0), LOW);
  }
}
