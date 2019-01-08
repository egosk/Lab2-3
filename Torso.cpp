//
// Created by emila on 12/20/2018.
//

#include "Torso.h"

Torso::Torso() {}

Torso::~Torso() {

}

int Torso::getStrenght() const {
    return strenght;
}

void Torso::setStrenght(int strenght) {
    Torso::strenght = strenght;
}
