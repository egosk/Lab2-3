//
// Created by emila on 12/17/2018.
//

#include "BodyPart.h"

const string &BodyPart::getName() const {
    return name;
}

void BodyPart::setName(const string &name) {
    BodyPart::name = name;
}

int BodyPart::getX_position() const {
    return x_position;
}

void BodyPart::setX_position(int x_position) {
    BodyPart::x_position = x_position;
}

int BodyPart::getY_position() const {
    return y_position;
}

void BodyPart::setY_position(int y_position) {
    BodyPart::y_position = y_position;
}
