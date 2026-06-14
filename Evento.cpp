#include "Evento.h"

Evento::Evento(int _ID, string _titulo, string _genero, int _anio, string _clasificacion, double _duracion, string _fecha, string _hora) : Contenido(int _ID, string _titulo, string _genero, int _anio, string _clasificacion, double _duracion){
    ID = _ID; 
    titulo = _titulo;
    genero = _genero; 
    anio = _anio;
    clasificacion = _clasificacion;
    duracion = _duracion;
    fecha = _fecha;
    hora = _hora;
    likes = 0;
}

void Evento::mostrarInfo(){
    cout << "EVENTO" << endl
         << "Titulo: " << titulo << endl
         << "Género: " << genero << endl
         << "Año: " << anio << endl
         << "Clasificación: " << clasificacion << endl
         << "Duración: " << duracion << endl
         << "Hora: " << hora << endl
         << "Fecha: " << fecha << endl
         << "Likes: " << likes << endl;
}

double Evento::calcularDuracion(){
    return _duracion;
}


void Evento::agregarALista(){
    cout << titulo << " Agregado a mi lista." << endl;
}

void Evento::quitarDeLista(){
    cout << titulo << " Eliminado de mi lista." << endl;
}

void Evento::darLike(){
    likes += 1;
}

void Evento::quitarLike(){
    if (likes > 0) {
        likes -= 1;
    }
}
