//
// Created by emila on 12/20/2018.
//

#include "Leg.h"

Leg::Leg(left_or_right side, int speed) : side(side), speed(speed) {}

Leg::~Leg() {

}

left_or_right Leg::getSide() const {
    return side;
}

void Leg::setSide(left_or_right side) {
    Leg::side = side;
}

int Leg::getSpeed() const {
    return speed;
}

void Leg::setSpeed(int speed) {
    Leg::speed = speed;
}

Leg::Leg() {}
