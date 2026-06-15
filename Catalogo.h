#ifndef CATALOGO_H
#define CATALOGO_H
#include <iostream>
#include <vector>
#include <string>

#include "Contenido.h"
#include "Serie.h"

using namespace std;

class Catalogo{
private:
    vector<Contenido*> contenidos;

public:
    Catalogo();

    void cargarArchivo();
    void cargarEpisodios();
    Serie* buscarSeriePorID(int id);

    vector<Contenido*> buscar(string titulo);
    double calcularDuracionTotal();

    void agregarContenido(Contenido* c);
    void eliminarContenido(Contenido* c);

    Catalogo& operator+(Contenido* c);
    Catalogo& operator-(Contenido* c);

    void mostrarCatalogo();

    ~Catalogo();
};

#endif
