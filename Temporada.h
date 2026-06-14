#ifndef TEMPORADA_H
#define TEMPORADA_H
#include "Episodio.h"
#include <vector>
#include <iostream>
using namespace std;
class Temporada:public Episodio{
private:
    int numero;
    vector<Episodio> episodios;
public:
    Temporada(int numero);
    double calcularDuracion();
    void agregarEpisodio(Episodio e);
    void eliminarEpisodio(Episodio e);
    vector<Episodio> verEpisodios();
    
};

#endif