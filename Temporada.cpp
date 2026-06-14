#include "Temporada.h"
Temporada::Temporada(int numero):Episodio("",0){

}
double Temporada::calcularDuracion(){
    double duracionTotal=0.0;
    for(const auto& episodio:episodios){
        duracionTotal+=episodio.calcularDuracion();
    }
    return duracionTotal;
}
void Temporada::agregarEpisodio(Episodio e){
    episodios.push_back(e);
}
void Temporada::eliminarEpisodio(Episodio e){
    
}