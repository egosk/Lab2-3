/**
* Klasa wirtualna reprezentujaca czesc ciala
 * Utworzona na potrzeby demonstracji wykorzystania fukcji abstrakcji w projekcie
 * Dziedziczy po niej klasa BodyPart
 *
*/
#include <iostream>
using namespace std;

#ifndef LAB2_3_PART_H
#define LAB2_3_PART_H
class Part{
public:
    virtual Part* getPart()=0;
    virtual ~Part(){};
};
#endif //LAB2_3_PART_H
