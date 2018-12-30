#include <iostream>
#include "BodyPartFactory.h"

using namespace std;


int main() {
    cout << "Hello! You are in Cyborg Factory!" << std::endl;
    BodyPartFactory* bodyPartFactory = new BodyPartFactory();
    Arm* arm1 = bodyPartFactory->creatingArm();
    cout << "This is arm1: \n Is prehensile: " << arm1->isIsPrehensile() << " \n Strength: " << arm1->getStrength() ;
    return 0;
}