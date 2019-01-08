#include <iostream>
#include "BodyPartFactory.h"
#include "Cyborg.h"

using namespace std;


int main() {
    cout << "Hello! You are in Cyborg Factory!" << std::endl;
    BodyPartFactory* bodyPartFactory = new BodyPartFactory();
    Arm* arm1 = bodyPartFactory->creatingArm();
    cout << "This is arm1: \n Is prehensile: " << arm1->isIsPrehensile() << " \n Strength: " << arm1->getStrength() << endl;

    Cyborg* c1 = new Cyborg();
    Torso* tor = new Torso();

    c1->setCyborgName("PierwszyCyborg");
    c1->setT(bodyPartFactory->creatingTorso());
    c1->setH(bodyPartFactory->creatingHead());
    cout <<"Can "<< c1->getCyborgName() <<" talk? " << c1->getH()->isCanTalk() << endl ;
    cout << "CYborg IQ: " << c1->getH()->getBrainPower() << endl;
    c1->setIQ(100);
    cout << "CYborg IQ: " << c1->getH()->getBrainPower() << endl;


    return 0;
}