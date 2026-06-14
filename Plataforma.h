#ifndef PLATAFORMA_H
#define PLATAFORMA_H
#include <iostream>
#include <string>
#include "Catalogo.h"
#include "GestorCuenta.h"
#include "Contenido.h"
using namespace std;

class Plataforma{
private:
    string nombre;
    Catalogo catalogo;
    GestorCuenta gestor;
public:
    Plataforma(string _nombre);

    void agregarContenido(Contenido* c);
};
#endif
