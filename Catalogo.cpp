#include "Catalogo.h"
#include "Pelicula.h"
#include "Serie.h"
#include "Evento.h"

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

Catalogo::Catalogo() {
}

void Catalogo::cargarArchivo(string archivo) {
    ifstream archivoCatalogo(archivo);

    if (!archivoCatalogo.is_open()) {
        throw runtime_error("No se pudo abrir Catalogo.txt");
    }

    string linea;

    while (getline(archivoCatalogo, linea)) {
        stringstream ss(linea);

        string tipo;
        string idStr;
        string titulo;
        string genero;
        string anioStr;
        string clasificacion;
        string duracionStr;
        string extra;

        getline(ss, tipo, '|');
        getline(ss, idStr, '|');
        getline(ss, titulo, '|');
        getline(ss, genero, '|');
        getline(ss, anioStr, '|');
        getline(ss, clasificacion, '|');
        getline(ss, duracionStr, '|');
        getline(ss, extra, '|');

        if (tipo == "" || idStr == "" || titulo == "" || genero == "" || anioStr == "" || clasificacion == "" || duracionStr == "" || extra == "") {
            cout << "Linea incompleta: " << linea << endl;
        }
        else {
            int id = stoi(idStr);
            int anio = stoi(anioStr);
            double duracion = stod(duracionStr);

            if (tipo == "PELICULA") {
                contenidos.push_back(new Pelicula(id, titulo, genero, anio, clasificacion, duracion, extra));
            }
            else if (tipo == "SERIE") {
                contenidos.push_back(new Serie(id, titulo, genero, anio, clasificacion, duracion, extra));
            }
            else if (tipo == "EVENTO") {
                contenidos.push_back(new Evento(id, titulo, genero, anio, clasificacion, duracion, extra, "En vivo"));
            }
            else {
                cout << "Tipo desconocido: " << tipo << endl;
            }
        }
    }

    archivoCatalogo.close();
    cout << "-----Catalogo Cargado con Exito!-----" << endl;
}

vector<Contenido*> Catalogo::buscar(string titulo) {
    vector<Contenido*> encontrados;
    for (Contenido* c : contenidos) {
        if (c->getTitulo() == titulo) {
            encontrados.push_back(c);
        }
    }
    return encontrados;
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
    for (size_t i = 0; i < contenidos.size(); i++) {
        if (contenidos[i] == c) {
            delete contenidos[i];
            contenidos.erase(contenidos.begin() + i);
            break;
        }
    }
}

Catalogo& Catalogo::operator+(Contenido* c) {
    agregarContenido(c);
    return *this;
}

Catalogo& Catalogo::operator-(Contenido* c) {
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
    for (Contenido* c : contenidos) {
        delete c;
    }

    contenidos.clear();
}
