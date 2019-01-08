//
// Created by emila on 12/30/2018.
//
#include <iostream>
#include "Head.h"
#include "Processor.h"
#include "Torso.h"
#include "Arm.h"
#include "Leg.h"
#include "list"
#include "IProfession .h"
#include "Profession.h"

using namespace std;

#ifndef LAB2_3_CYBORG_H
#define LAB2_3_CYBORG_H
class Cyborg{
    string cyborgName;
    Head* h;
    Processor* p;
    Torso* t;
    list<Arm>* arms;
    list<Leg>* legs;
    int workEfficiency;
    IProfession* profession;
public:
    int getWorkEfficiency() const;

    void setWorkEfficiency(int workEfficiency);

public:
    Cyborg(Profession prof1);

    Cyborg();

    virtual ~Cyborg();

    void setIQ(int iq);

    void setStrength(int st);

    const string &getCyborgName() const;

    void setCyborgName(const string &cyborgName);

    Head *getH() const;

    void setH(Head *h);

    Processor *getP() const;

    void setP(Processor *p);

    Torso *getT() const;

    void setT(Torso *t);

    list<Arm> *getArms() const;

    void setArms(list<Arm> *arms);

    list<Leg> *getLegs() const;

    void setLegs(list<Leg> *legs);
};
#endif //LAB2_3_CYBORG_H
