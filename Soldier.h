/**
* Klasa reprezentujaca specjalizacje robota - zolnierz
*/
#include "IProfession .h"
#include <iostream>
#ifndef LAB2_3_SOLDIER_H
#define LAB2_3_SOLDIER_H
class Soldier : public IProfession{
    void work();
    void setStrength();
};
#endif //LAB2_3_SOLDIER_H
