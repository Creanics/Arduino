#include <Arduino.h>
#include <PinsManager.h>
#include "Led.h"

void setupLed() {
  pins.addOutput(13);
}
