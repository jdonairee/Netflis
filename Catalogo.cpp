#include "Catalogo.h"

Catalogo::Catalogo() {
}

vector<Contenido*> Catalogo::buscar(string titulo) {
    vector<Contenido*> resultados;

    for (Contenido* c : contenidos) {
        if (c->getTitulo() == titulo) {
            resultados.push_back(c);
        }
    }

    return resultados;
}

double Catalogo::calcularDuracionTotal() {
    double total = 0;

    for (Contenido* c : contenidos) {
        total += c->calcularDuracion();
    }

    return total;
}

void Catalogo::agregarContenido(Contenido* c) {
    contenidos.push_back(c);
}

void Catalogo::eliminarContenido(Contenido* c) {
    for (int i = 0; i < (int)contenidos.size(); i++) {
        if (contenidos[i] == c) {
            contenidos.erase(contenidos.begin() + i);
            break;
        }
    }
}

Catalogo Catalogo::operator+(Contenido* c) {
    agregarContenido(c);
    return *this;
}

Catalogo Catalogo::operator-(Contenido* c) {
    eliminarContenido(c);
    return *this;
}

void Catalogo::mostrarCatalogo() {
    for (Contenido* c : contenidos) {
        c->mostrarInfo();
        cout << endl;
    }
}

Catalogo::~Catalogo() {
}
