#include "Plataforma.h"

Plataforma::Plataforma(string _nombre){
    _nombre = _nombre;
}

void Plataforma::agregarContenido(Contenido* c){
    catalogo.agregarContenido(c);
}
