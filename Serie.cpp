#include "Serie.h"

Serie::Serie() : Contenido() {
    director = "";
}

Serie::Serie(int _id, string _titulo, string _genero, int _anio, string _clasificacion, double _duracion, string _director)
    : Contenido(_id, _titulo, _genero, _anio, _clasificacion, _duracion) {
    director = _director;
}

void Serie::mostrarInfo() {
    cout << "Serie: " << titulo << endl;
    cout << "ID: " << id << endl;
    cout << "Genero: " << genero << endl;
    cout << "Anio: " << anio << endl;
    cout << "Clasificacion: " << clasificacion << endl;
    cout << "Director: " << director << endl;
    cout << "Temporadas: " << temporadas.size() << endl;
    cout << "Duracion total: " << calcularDuracion() << " minutos" << endl;
}

double Serie::calcularDuracion() {
    double total = 0;

    for (Temporada &t : temporadas) {
        total += t.calcularDuracion();
    }

    return total;
}

void Serie::agregarTemporada(Temporada t) {
    temporadas.push_back(t);
}

void Serie::eliminarTemporada(Temporada t) {
    for (size_t i = 0; i < temporadas.size(); i++) {
        if (temporadas[i].getNumero() == t.getNumero()) {
            temporadas.erase(temporadas.begin() + i);
            break;
        }
    }
}

vector<Temporada> Serie::verTemporadas() {
    return temporadas;
}

void Serie::agregarALista() {
    cout << titulo << " se agrego a la lista." << endl;
}

void Serie::quitarDeLista() {
    cout << titulo << " se elimino de la lista." << endl;
}

void Serie::darLike() {
    likes += 1;
    cout << "Diste like a " << titulo << "." << endl;
}

void Serie::quitarLike() {
    if (likes > 0) {
        likes -= 1;
    }

    cout << "Quitaste el like de " << titulo << "." << endl;
}

void Serie::agregarEpisodioATemporada(int numeroTemporada, Episodio* episodio){
    for(int i = 0; i < temporadas.size(); i++){
        if(temporadas[i].getNumero() == numeroTemporada){
            temporadas[i].agregarEpisodio(episodio);
            return;
        }
    }
    Temporada nueva(numeroTemporada);
    nueva.agregarEpisodio(episodio);
    temporadas.push_back(nueva);
}
