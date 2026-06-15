#include "Plataforma.h"

Plataforma::Plataforma(string _nombre){
    nombre = _nombre;
}

void Plataforma::cargarCatalogo(){
    catalogo.cargarArchivo();
    catalogo.cargarEpisodios();
}

vector<Contenido*> Plataforma::buscar(string titulo){
    return catalogo.buscar(titulo);
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

void Plataforma::agregarCuenta(Cuenta c){
    gestor.agregarCuenta(c);
}

Cuenta Plataforma::buscarCuenta(string nombre){
    return gestor.buscarCuenta(nombre);
}
