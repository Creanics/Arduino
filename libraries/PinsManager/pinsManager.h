#pragma once

class PinsManager {
private:
  static const int MAX_PINS = 20;

  int inputPins[MAX_PINS];
  int outputPins[MAX_PINS];

  int inputCount = 0;
  int outputCount = 0;

public:
    void addInput(int pin);

    void addOutput(int pin);

    void init();

    int getInputCount() const;
    int getOutputCount() const;

    int getInputPin(int index) const;
    int getOutputPin(int index) const;
};

extern PinsManager pins;
