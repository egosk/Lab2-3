/**
* Klasa reprezentujaca specjalizacje robota - naukowiec
*/
#include "IProfession .h"
#include <iostream>

#ifndef LAB2_3_SCIENTIST_H
#define LAB2_3_SCIENTIST_H
class Scientist : public IProfession{
    void work();
    void setIQ();
};
#endif //LAB2_3_SCIENTIST_H
