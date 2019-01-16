//
// Created by emila on 12/20/2018.
//

#include "Processor.h"

Processor::~Processor() {

}

int Processor::getFrequency() const {
    return frequency;
}

void Processor::setFrequency(int frequency) {
    Processor::frequency = frequency;
}

int Processor::getCoreNumber() const {
    return coreNumber;
}

void Processor::setCoreNumber(int coreNumber) {
    Processor::coreNumber = coreNumber;
}

Processor::Processor(int frequency, int coreNumber) : frequency(frequency), coreNumber(coreNumber) {}
