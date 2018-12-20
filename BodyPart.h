//
// Created by emila on 12/17/2018.
//
#include <iostream>
using namespace std;

#ifndef LAB2_3_BODYPART_H
#define LAB2_3_BODYPART_H

class BodyPart{
    string name;
    int x_position, y_position;
public:
    int getX_position() const;

    void setX_position(int x_position);

    int getY_position() const;

    void setY_position(int y_position);

public:
    const string &getName() const;

    void setName(const string &name);


};

#endif //LAB2_3_BODYPART_H
