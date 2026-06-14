#ifndef EPISODIO_H
#define EPISODIO_H

#include <iostream>
using namespace std;

class Episodio{
private:
    string titulo;
    double duracion;

public: 
    double calcularDuracion();
};
#endif
