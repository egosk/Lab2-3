//
// Created by emila on 12/20/2018.
//

#include "Torso.h"


Torso::~Torso() {

}

int Torso::getStrength() const {
    return strength;
}

void Torso::setStrength(int strength) {
    Torso::strength = strength;
}

Torso::Torso(int strength) : strength(strength) {}
