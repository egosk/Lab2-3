/*
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Cyborg.h"
#include "Worker.h"
#include "BodyPartFactory.h"



SCENARIO("Cyborg-worker can be created and modified"){
    GIVEN("Cyborg-worker with basic parameters"){
        Cyborg* c1 = new Cyborg(Profession::Worker);
        REQUIRE(c1->getCyborgName() == "CyborgWorker1");
        REQUIRE(c1->getWorkEfficiency() == 100);
        REQUIRE(c1->getH()->getBrainPower() == 10);
        REQUIRE(c1->getH()->isCanTalk() == 1);
        REQUIRE(c1->getH()->isLaserEyes() == 0);
        REQUIRE(c1->getP()->getCoreNumber() == 4);
        REQUIRE(c1->getP()->getFrequency() == 3);
        REQUIRE(c1->getT()->getStrength() == 20);

        WHEN("A new head with different parameters is mantled to Cyborg"){
            Head* h1 = new Head(1,1,0);
            c1->setH(h1);
            REQUIRE(c1->getH()->getBrainPower() == 1);
            REQUIRE(c1->getH()->isCanTalk() == 0);
            REQUIRE(c1->getH()->isLaserEyes() == 1);
        }
    }
}

SCENARIO("Cyborg-scientist can be created and modified"){
    GIVEN("Cyborg-scientist with basic parameters"){
        Cyborg* c1 = new Cyborg(Profession::Scientist);
        REQUIRE(c1->getCyborgName() == "CyborgScientist1");
        REQUIRE(c1->getWorkEfficiency() == 50);
        REQUIRE(c1->getH()->getBrainPower() == 100);
        REQUIRE(c1->getH()->isCanTalk() == 1);
        REQUIRE(c1->getH()->isLaserEyes() == 0);
        REQUIRE(c1->getP()->getCoreNumber() == 4);
        REQUIRE(c1->getP()->getFrequency() == 3);
        REQUIRE(c1->getT()->getStrength() == 20);

        WHEN("A new processor with different parameters is mantled to Cyborg"){
            Processor* p1 = new Processor(4, 3);
            c1->setP(p1);
            REQUIRE(c1->getP()->getFrequency()==4);
            REQUIRE(c1->getP()->getCoreNumber()==3);

        }
    }
}

SCENARIO("Cyborg-soldier can be created and modified"){
    GIVEN("Cyborg-soldier with basic parameters"){
        Cyborg* c1 = new Cyborg(Profession::Soldier);
        REQUIRE(c1->getCyborgName() == "CyborgSoldier1");
        REQUIRE(c1->getWorkEfficiency() == 50);
        REQUIRE(c1->getH()->getBrainPower() == 10);
        REQUIRE(c1->getH()->isCanTalk() == 1);
        REQUIRE(c1->getH()->isLaserEyes() == 1);
        REQUIRE(c1->getP()->getCoreNumber() == 4);
        REQUIRE(c1->getP()->getFrequency() == 3);
        REQUIRE(c1->getT()->getStrength() == 1000);

        WHEN("A new Torso with different parameters in mantled to Cyborg"){
            Torso* t1 = new Torso(2000);
            c1->setT(t1);
            REQUIRE(c1->getT()->getStrength()==2000);
        }
    }
}*/