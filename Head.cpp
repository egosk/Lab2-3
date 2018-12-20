//
// Created by emila on 12/20/2018.
//

#include "Head.h"

Head::Head(bool laserEyes, int brainPower, bool canTalk) : laserEyes(laserEyes), brainPower(brainPower),
                                                           canTalk(canTalk) {}

Head::~Head() {

}

bool Head::isLaserEyes() const {
    return laserEyes;
}

void Head::setLaserEyes(bool laserEyes) {
    Head::laserEyes = laserEyes;
}

int Head::getBrainPower() const {
    return brainPower;
}

void Head::setBrainPower(int brainPower) {
    Head::brainPower = brainPower;
}

bool Head::isCanTalk() const {
    return canTalk;
}

void Head::setCanTalk(bool canTalk) {
    Head::canTalk = canTalk;
}
