/**
* Klasa reprezentująca processor robota.
 * Dziedziczy po klasie BodyPart.
 *
 * \param frequency reprezentuje czestotliwosc
 * \param coreNumber ilosc rdzeni
 *
*/
#include "BodyPart.h"
#include <iostream>
#ifndef LAB2_3_PROCESSOR_H
#define LAB2_3_PROCESSOR_H
class Processor : public BodyPart{
    int frequency; //taktowanie GHz
    int coreNumber;
public:
    Processor(int frequency = 3, int coreNumber = 4);


    virtual ~Processor();

    int getFrequency() const;

    void setFrequency(int frequency);

    int getCoreNumber() const;

    void setCoreNumber(int coreNumber);
};

#endif //LAB2_3_PROCESSOR_H
