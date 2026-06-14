#ifndef SERIE_H
#define SERIE_H
#include <iostream>
#include <vector>
#include <string>
#include "Contenido.h"
#include "Temporada.h"
#include "ILikeable.h"
#include "IListable.h"
using namespace std;

class Serie: public Contenido, public ILikeable, public IListable{
private:
    string director;
    vector<Temporada> temporadas;

public:
    Serie();
    Serie(int _id, string _titulo, string _genero, int _anio, string _clasificacion, double _duracion, string _director);

    void mostrarInfo();
    double calcularDuracion();

    void agregarTemporada(Temporada t);
    void eliminarTemporada(Temporada t);
    vector<Temporada> verTemporadas();

    void agregarALista();
    void quitarDeLista();

    void darLike();
    void quitarLike();
};
#endif
