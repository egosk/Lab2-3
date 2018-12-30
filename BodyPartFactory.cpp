//
// Created by emila on 12/28/2018.
//

#include "BodyPartFactory.h"

Arm* BodyPartFactory:: creatingArm(){
    return new Arm();
}
Head* BodyPartFactory::creatingHead(){
    return new Head();
};
Leg* BodyPartFactory::creatingLeg(){
    return new Leg();
};
Processor* BodyPartFactory::creatingProcessor(){
    return new Processor();
};
Torso* BodyPartFactory::creatingTorso(){
    return new Torso();
};