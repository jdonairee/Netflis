#ifndef ILISTABLE_H
#define ILISTABLE_H
#include <iostream>
using namespace std;
class IListable{
    virtual void agregarALista() = 0;
    virtual void quitarDeLista() = 0;
};
#endif