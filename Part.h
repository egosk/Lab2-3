//
// Created by emila on 12/30/2018.
//
#include <iostream>
using namespace std;

#ifndef LAB2_3_PART_H
#define LAB2_3_PART_H
class Part{
public:
    virtual Part* getPart()=0;
    virtual ~Part(){};
};
#endif //LAB2_3_PART_H
