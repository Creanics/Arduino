#include <Arduino.h>
#include <PinsManager.h>

void setup() {
  pins.addInput(2);
  pins.addOutput(13);

  pins.init();
}

void loop() {
  if (digitalRead(pins.getInputPin(0)) == HIGH) {
    digitalWrite(pins.getOutputPin(0), HIGH);
  } else {
    digitalWrite(pins.getOutputPin(0), LOW);
  }
}
