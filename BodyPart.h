//
// Created by emila on 12/17/2018.
//
#include <iostream>
using namespace std;

#include "Part.h"

#ifndef LAB2_3_BODYPART_H
#define LAB2_3_BODYPART_H

class BodyPart : public Part{
    string name;
    int x_position, y_position;
public:
    BodyPart();
    //~BodyPart(); usunieta po dodaniu abstakcji

public:
    int getX_position() const;

    void setX_position(int x_position);

    int getY_position() const;

    void setY_position(int y_position);

    const string &getName() const;

    void setName(const string &name);

    Part* getPart();


};

#endif //LAB2_3_BODYPART_H
