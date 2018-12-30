//
// Created by emila on 12/20/2018.
//
#include "BodyPart.h"
#include <iostream>

#ifndef LAB2_3_HEAD_H
#define LAB2_3_HEAD_H
class Head : public BodyPart{
    bool laserEyes;
    int brainPower;
    bool canTalk;
public:
    Head(bool laserEyes, int brainPower, bool canTalk);

    Head();

    virtual ~Head();

    bool isLaserEyes() const;

    void setLaserEyes(bool laserEyes);

    int getBrainPower() const;

    void setBrainPower(int brainPower);

    bool isCanTalk() const;

    void setCanTalk(bool canTalk);
};
#endif //LAB2_3_HEAD_H
