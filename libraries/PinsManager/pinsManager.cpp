#include <Arduino.h>
#include "./pinsManager.h"

void PinsManager::addInput(int pin)
{
  if (inputCount < MAX_PINS)
  {
    inputPins[inputCount++] = pin;
  }
}

void PinsManager::addOutput(int pin)
{
  if (outputCount < MAX_PINS)
  {
    outputPins[outputCount++] = pin;
  }
}

void PinsManager::init()
{
  #ifdef DEBUG
    Serial.println("");
    Serial.println("INIT PINS");
    Serial.println("");
  #endif
  for (int i = 0; i < inputCount; i++)
  {
    pinMode(inputPins[i], INPUT);
  }
  for (int i = 0; i < outputCount; i++)
  {
    pinMode(outputPins[i], OUTPUT);
  }
}

// Getters
int PinsManager::getInputCount() const { return inputCount; }
int PinsManager::getOutputCount() const { return outputCount; }

int PinsManager::getInputPin(int index) const { return inputPins[index]; }
int PinsManager::getOutputPin(int index) const { return outputPins[index]; }
