#ifndef EVENTO_H
#define EVENTO_H
#include <iostream>
#include "Contenido.h"
#include "IListable.h"
#include "ILikeable.h"
using namespace std;

class Evento : public Contenido, public IListable, public ILikeable{
private:
    string fecha;
    string hora;
    int likes;

public:
    Evento(int _ID, string _titulo, string _genero, int _anio,
           string _clasificacion, double _duracion,
           string _fecha, string _hora);

    void mostrarInfo();
    double calcularDuracion();

    void agregarALista();
    void quitarDeLista();

    void darLike();
    void quitarLike();
};
#endif
