//
// Created by emila on 12/20/2018.
//
#include "BodyPart.h"
#include <iostream>
#ifndef LAB2_3_TORSO_H
#define LAB2_3_TORSO_H
class Torso : public BodyPart{
    int strenght;
public:
    int getStrenght() const;

    void setStrenght(int strenght);

public:
    Torso();

    virtual ~Torso();

};
#endif //LAB2_3_TORSO_H
