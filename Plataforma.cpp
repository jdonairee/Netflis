#include "Plataforma.h"

Plataforma::Plataforma(string _nombre){
    nombre = _nombre;
}

void Plataforma::cargarCatalogo(){
    catalogo.cargarArchivo(archivo);
}

void Plataforma::agregarContenido(Contenido* c){
    catalogo.agregarContenido(c);
}

void Plataforma::eliminarContenido(Contenido* c){
    catalogo.eliminarContenido(c);
}

void Plataforma::mostrarCatalogo(){
    cout << "PLATAFORMA: " << nombre << endl;
    catalogo.mostrarCatalogo();
}

double Plataforma::calcularDuracionTotal(){
    return catalogo.calcularDuracionTotal();
}
