/**
* Klasa reprezentujaca specjalizacje robota - robotnik
*/
#include "IProfession .h"
#include <iostream>


#ifndef LAB2_3_WORKER_H
#define LAB2_3_WORKER_H
class Worker : public IProfession{
    void work();
    void setEfficiency();
};
#endif //LAB2_3_WORKER_H
