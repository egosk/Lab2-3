//
// Created by emila on 12/30/2018.
//

#include <list>
#include "Cyborg.h"
#include "Worker.h"
#include "Scientist.h"
#include "Soldier.h"
#include "BodyPartFactory.h"

Cyborg::Cyborg(Profession prof1) {
    BodyPartFactory* bpf = new BodyPartFactory();
    switch (prof1){
        case Profession::Worker:
            Cyborg::profession = new Worker();
            Cyborg::cyborgName = "CyborgWorker1";
            Cyborg::workEfficiency = 100;
            Cyborg::h = bpf->creatingHead();
            Cyborg::p = bpf->creatingProcessor();
            Cyborg::t = bpf->creatingTorso();
            break;
        case Profession::Scientist:
            Cyborg::profession = new Scientist();
            Cyborg::cyborgName = "CyborgScientist1";
            Cyborg::workEfficiency = 50;
            Cyborg::h = bpf->creatingHead();
            h->setBrainPower(100);
            Cyborg::p = bpf->creatingProcessor();
            Cyborg::t = bpf->creatingTorso();
            break;
        case Profession::Soldier:
            Cyborg::profession = new Soldier();
            Cyborg::cyborgName = "CyborgSoldier1";
            Cyborg::workEfficiency = 50;
            Cyborg::h = bpf->creatingHead();
            h->setLaserEyes(1);
            Cyborg::p = bpf->creatingProcessor();
            Cyborg::t = bpf->creatingTorso();
            t->setStrength(1000);
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
    Cyborg::t->setStrength(st);
}

int Cyborg::getWorkEfficiency() const {
    return workEfficiency;
}

void Cyborg::setWorkEfficiency(int workEfficiency) {
    Cyborg::workEfficiency = workEfficiency;
}
