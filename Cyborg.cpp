//
// Created by emila on 12/30/2018.
//

#include <list>
#include "Cyborg.h"
#include "Worker.h"
#include "Scientist.h"
#include "Soldier.h"

Cyborg::Cyborg(Profession prof1) {
    switch (prof1){
        case Profession::Worker:
            Cyborg::profession = new Worker();
            break;
        case Profession::Scientist:
            Cyborg::profession = new Scientist();
            break;
        case Profession::Soldier:
            Cyborg::profession = new Soldier();
            break;
        default:
            throw runtime_error("Unexpected strategy");
    }


}

Cyborg::Cyborg() {}

Cyborg::~Cyborg() {

}

void Cyborg::setIQ(int iq){
    Cyborg::h->setBrainPower(iq);
    //Head h1 = new Head;
    //h1.setBrainPower(iq);
    //Cyborg::h = h1;
    //Cyborg::hsetBrainPower(iq);
};

const string &Cyborg::getCyborgName() const {
    return cyborgName;
}

void Cyborg::setCyborgName(const string &cyborgName) {
    Cyborg::cyborgName = cyborgName;
}

Head *Cyborg::getH() const {
    return h;
}

void Cyborg::setH(Head *h) {
    Cyborg::h = h;
}

Processor *Cyborg::getP() const {
    return p;
}

void Cyborg::setP(Processor *p) {
    Cyborg::p = p;
}

Torso *Cyborg::getT() const {
    return t;
}

void Cyborg::setT(Torso *t) {
    Cyborg::t = t;
}

list<Arm> *Cyborg::getArms() const {
    return arms;
}

void Cyborg::setArms(list<Arm> *arms) {
    Cyborg::arms = arms;
}

list<Leg> *Cyborg::getLegs() const {
    return legs;
}

void Cyborg::setLegs(list<Leg> *legs) {
    Cyborg::legs = legs;
}

void Cyborg::setStrength(int st) {
    Cyborg::t->setStrenght(st);
}

int Cyborg::getWorkEfficiency() const {
    return workEfficiency;
}

void Cyborg::setWorkEfficiency(int workEfficiency) {
    Cyborg::workEfficiency = workEfficiency;
}
