/**
* Klasa reprezentująca reke robota.
 * Dziedziczy po klasie BodyPart.
 *
 * @params side okresla z ktora strona mamy do czynienia
 * \params isPrehensile okresla czy reka jest chwytna 1= chwytna
 * \param stregth okresla sile reki
*/
#include "BodyPart.h"
#include <iostream>
#include "LeftOrRight.h"
#ifndef LAB2_3_ARM_H
#define LAB2_3_ARM_H
class Arm : public BodyPart{
    left_or_right side;
    bool isPrehensile;
    int strength;
public:
    Arm(left_or_right side = left_or_right ::right, bool isPrehensile = 1, int strength = 10);

    virtual ~Arm();

    left_or_right getSide() const;

    void setSide(left_or_right side);

    bool isIsPrehensile() const;

    void setIsPrehensile(bool isPrehensile);

    int getStrength() const;

    void setStrength(int strength);

};
#endif //LAB2_3_ARM_H
