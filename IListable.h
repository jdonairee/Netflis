#ifndef ILISTABLE_H
#define ILISTABLE_H
#include <iostream>
using namespace std;
class IListable{
public:
    virtual void agregarALista() = 0;
    virtual void quitarDeLista() = 0;
};
#endif