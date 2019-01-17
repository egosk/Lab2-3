/**
* Klasa reprezentująca glowe robota.
* Dziedziczy po klasie BodyPart.
*
* \param lasetEyes okresla czy dostepna jest opcja z laserowym wzrokiem
 * \param brainPower okresla zdolnosci umyslowe robota
 * \param canTalk okresla umiejetnosc mowienia robota
*
*/
#include "BodyPart.h"
#include <iostream>

#ifndef LAB2_3_HEAD_H
#define LAB2_3_HEAD_H
class Head : public BodyPart{
    bool laserEyes;
    int brainPower;
    bool canTalk;
public:
    Head(bool laserEyes = 0, int brainPower =  10 , bool canTalk = 1);


    virtual ~Head();

    bool isLaserEyes() const;

    void setLaserEyes(bool laserEyes);

    int getBrainPower() const;

    void setBrainPower(int brainPower);

    bool isCanTalk() const;

    void setCanTalk(bool canTalk);
};
#endif //LAB2_3_HEAD_H
