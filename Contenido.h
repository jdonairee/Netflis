#ifndef CONTENIDO_H
#define CONTENIDO_H

#include <iostream>
#include <string>

using namespace std;

class Contenido {
protected:
    int id;
    string titulo;
    string genero;
    int anio;
    string clasificacion;
    double duracion;

public:
    Contenido();
    Contenido(int _id, string _titulo, string _genero, int _anio, string _clasificacion, double _duracion);

    virtual void mostrarInfo() = 0;
    virtual double calcularDuracion() = 0;

    string getTitulo();
    int getId();

    virtual ~Contenido();
};

#endif
