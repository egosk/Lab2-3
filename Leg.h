//
// Created by emila on 12/20/2018.
//
#include "BodyPart.h"
#include <iostream>
#include "LeftOrRight.h"

#ifndef LAB2_3_LEG_H
#define LAB2_3_LEG_H
class Leg : public BodyPart{
    left_or_right side;
    int speed;
public:
    Leg(left_or_right side, int speed);

    Leg();

    virtual ~Leg();

    left_or_right getSide() const;

    void setSide(left_or_right side);

    int getSpeed() const;

    void setSpeed(int speed);
};
#endif //LAB2_3_LEG_H
