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
    bool isPrehensile; //chwytny
    int strength;
public:
    Arm(left_or_right side = left_or_right ::right, bool isPrehensile = 1, int strength = 10);
    //Arm();

    virtual ~Arm();

    left_or_right getSide() const;

    void setSide(left_or_right side);

    bool isIsPrehensile() const;

    void setIsPrehensile(bool isPrehensile);

    int getStrength() const;

    void setStrength(int strength);


};
#endif //LAB2_3_ARM_H
