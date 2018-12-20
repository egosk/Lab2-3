//
// Created by emila on 12/20/2018.
//
#include "BodyPart.h"
#include <iostream>
#ifndef LAB2_3_PROCESSOR_H
#define LAB2_3_PROCESSOR_H
class Processor : public BodyPart{
    int frequency;
    int coreNumber;
public:
    Processor();

    virtual ~Processor();

    int getFrequency() const;

    void setFrequency(int frequency);

    int getCoreNumber() const;

    void setCoreNumber(int coreNumber);
};

#endif //LAB2_3_PROCESSOR_H
