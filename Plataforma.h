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

    void cargarCatalogo(string archivo);
    vector<Contenido*> buscar(string titulo);
    void agregarContenido(Contenido* c);
    void eliminarContenido(Contenido* c);
    void mostrarCatalogo();
    double calcularDuracionTotal();
    void agregarCuenta(Cuenta c);
    Cuenta buscarCuenta(string nombre);
};
#endif
