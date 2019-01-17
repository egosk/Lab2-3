/**
* Klasa reprezentująca tors robota.
* Dziedziczy po klasie BodyPart.
*
* \param strength okresla sile robota
*
*/
#include "BodyPart.h"
#include <iostream>
#ifndef LAB2_3_TORSO_H
#define LAB2_3_TORSO_H
class Torso : public BodyPart{
    int strength;
public:
    Torso(int strength = 20);

    int getStrength() const;

    void setStrength(int strength);


    virtual ~Torso();

};
#endif //LAB2_3_TORSO_H
