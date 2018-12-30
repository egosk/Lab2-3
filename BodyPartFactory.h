//
// Created by emila on 12/28/2018.
//
#include "Arm.h"
#include "Head.h"
#include "Leg.h"
#include "Processor.h"
#include "Torso.h"

#ifndef LAB2_3_BODYPARTFACTORY_H
#define LAB2_3_BODYPARTFACTORY_H

class BodyPartFactory{
public:
    Arm* creatingArm();
    Head* creatingHead();
    Leg* creatingLeg();
    Processor* creatingProcessor();
    Torso* creatingTorso();
};

#endif //LAB2_3_BODYPARTFACTORY_H
