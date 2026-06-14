#ifndef EPISODIO_H
#define EPISODIO_H

#include <iostream>
#include <string>
using namespace std;

class Episodio{
private:
    string titulo;
    double duracion;

public: 
    Episodio(string _titulo, double _duracion);
    double calcularDuracion();
};
#endif
