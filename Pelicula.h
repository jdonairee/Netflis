#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>
#include "Contenido.h"
#include "ILikeable.h"
#include "IListable.h"
using namespace std;
class Pelicula: public Contenido, public ILikeable, public IListable{
private:
    string director;
public: 
    Pelicula(string titulo, string genero, int anio, string clasificacion, double duracion, string director);
    void mostrarInfo();
    double calcularDuracion();

};
#endif