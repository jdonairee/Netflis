#include "Episodio.h"

Episodio::Episodio(){
    titulo="";
    duracion=0.0;
}
Episodio::Episodio(string _titulo, double _duracion){
    titulo = _titulo;
    duracion = _duracion;
}

double Episodio::calcularDuracion(){
    return duracion;
}
string Episodio::getTitulo(){
    return titulo;
}