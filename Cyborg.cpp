//
// Created by emila on 12/30/2018.
//

#include <list>
#include "Cyborg.h"

Cyborg::Cyborg(const string &cyborgName, Head *h, Processor *p, Torso *t, list<Arm> *arms, list<Leg> *legs)
        : cyborgName(cyborgName), h(h), p(p), t(t), arms(arms), legs(legs) {}

Cyborg::Cyborg() {}

Cyborg::~Cyborg() {

}

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
