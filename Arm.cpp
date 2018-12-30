//
// Created by emila on 12/20/2018.
//

#include "Arm.h"

left_or_right Arm::getSide() const {
    return side;
}

void Arm::setSide(left_or_right side) {
    Arm::side = side;
}

bool Arm::isIsPrehensile() const {
    return isPrehensile;
}

void Arm::setIsPrehensile(bool isPrehensile) {
    Arm::isPrehensile = isPrehensile;
}

int Arm::getStrength() const {
    return strength;
}

void Arm::setStrength(int strength) {
    Arm::strength = strength;
}

Arm::Arm(bool isPrehensile, int strength) : isPrehensile(isPrehensile),
                                                               strength(strength) {}

Arm::~Arm() {

}

//Arm::Arm() {}
