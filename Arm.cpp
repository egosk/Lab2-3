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

bool Arm::isIsPrehesile() const {
    return isPrehesile;
}

void Arm::setIsPrehesile(bool isPrehesile) {
    Arm::isPrehesile = isPrehesile;
}

int Arm::getStrength() const {
    return strength;
}

void Arm::setStrength(int strength) {
    Arm::strength = strength;
}

Arm::Arm(left_or_right side, bool isPrehesile, int strength) : side(side), isPrehesile(isPrehesile),
                                                               strength(strength) {}

Arm::~Arm() {

}
