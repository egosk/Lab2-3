/**
* Klasa reprezentująca czesc ciala robota.
 * Dziedziczy po klasie Part.
 * Dziedzicza po niej klasy Arm, Leg, Torso, Head, Processor.
 *
 * \param x_position, y_position moga byc uzywane przy realizacji gui
 *
*/
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
