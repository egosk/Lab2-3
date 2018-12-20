//
// Created by emila on 12/20/2018.
//
#include "BodyPart.h"
#include <iostream>
#include "LeftOrRight.h"
#ifndef LAB2_3_ARM_H
#define LAB2_3_ARM_H
class Arm : public BodyPart{
    left_or_right side;
    bool isPrehesile; //chwytny
    int strength;
public:
    Arm(left_or_right side, bool isPrehesile, int strength);

    virtual ~Arm();

    left_or_right getSide() const;

    void setSide(left_or_right side);

    bool isIsPrehesile() const;

    void setIsPrehesile(bool isPrehesile);

    int getStrength() const;

    void setStrength(int strength);


};
#endif //LAB2_3_ARM_H
