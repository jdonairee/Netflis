#ifndef CUENTA_H
#define CUENTA_H

#include <iostream>
#include <string>
#include <vector>
#include "Contenido.h"
using namespace std;

class Cuenta{
private:
    string nombre;
    string tipo;
    vector <Contenido*>miLista;
    vector <Contenido*>liked;
public:
    Cuenta(string _nombre, string _tipo);
    void agregarAListaPersonal(Contenido* c);
    void darLikeContenido(Contenido* c);

    bool puedeVer(Contenido* c);

    void verMiLista();
    void verLikes();

    string getNombre();
};
#endif
