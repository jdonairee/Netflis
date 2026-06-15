#include "Temporada.h"
Temporada::Temporada(int _numero){
    numero=_numero;
}
double Temporada::calcularDuracion(){
    double duracionTotal=0.0;
    for(Episodio &e : episodios){
        duracionTotal+=e.calcularDuracion();
    }
    return duracionTotal;
}
void Temporada::agregarEpisodio(Episodio e){
    episodios.push_back(e);
}
void Temporada::eliminarEpisodio(Episodio e){
    for(auto t=episodios.begin(); t != episodios.end(); ++t){
        if(t->getTitulo()==e.getTitulo()){
            episodios.erase(t);
            break;
        }
    }
}
vector<Episodio> Temporada::verEpisodios(){
    return episodios;
}
int Temporada::getNumero(){
    return numero;
}