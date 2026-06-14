#include "Contenido.h"

Contenido::Contenido(){
  id = 0;
  titulo = "";
  genero = "";
  anio = 0;
  clasificacion = "";
  duracion = 0;
}

Contenido::Contenido(int _id, string _titulo, string _genero, int _anio, string _clasificacion, double _duracion) {
    id = _id;
    titulo = _titulo;
    genero = _genero;
    anio = _anio;
    clasificacion = _clasificacion;
    duracion = _duracion;
}

string Contenido::getTitulo() {
    return titulo;
}

int Contenido::getId() {
    return id;
}

string Contenido::getClasificacion() {
    return clasificacion;
}

Contenido::~Contenido() {
}
