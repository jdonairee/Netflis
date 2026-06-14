#ifndef TEMPORADA_H
#define TEMPORADA_H
#include "Episodio.h"
#include "ILikeable.h"
#include <iostream>
using namespace std;
class Temporada:public Episodio,public ILikeable{
private 
    int num;
    vector<Episodio> episodios;
public:
    Temporada(int num);
    double calcularDuracion();
    void mostrarInfo();
};

#endif