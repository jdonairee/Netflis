#ifndef SERIE_H
#define SERIE_H
#include <iostream>
#include "Contenido.h"
#include "ILikeable.h"
#include "IListable.h"
using namespace std;

class Serie: public Contenido, public ILikeable, public IListable{

};
#endif