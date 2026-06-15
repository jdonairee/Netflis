#include "Pelicula.h"
Pelicula::Pelicula(int _id, string _titulo, string _genero, int _anio, string _clasificacion, double _duracion, string _director)
:Contenido(_id,_titulo,_genero,_anio,_clasificacion,_duracion){
    director=_director;
}
void Pelicula::mostrarInfo(){
    cout<<"Nombre de la Pelicula: "<<titulo<<endl
    <<"Genero: "<<genero<<endl
    <<"Director: "<<director<<endl
    <<"Anio: "<<anio<<endl
    <<"Clasificacion: "<<clasificacion<<endl
    <<"Duracion: "<<duracion<<" minutos"<<endl
    <<"ID: "<<id<<endl;
}
double Pelicula::calcularDuracion(){
    return duracion;
}
void Pelicula::darLike(){
    cout<<"La Pelicula: "<<titulo<<" Ha Recibido un Like"<<endl;
    likes += 1;
}

void Pelicula::quitarLike(){
    if(likes>0){
        cout<<"Se ha Eliminado un Like de la Pelicula: "<<titulo<<endl;
        likes-=1;
    }
}

void Pelicula::agregarALista(){
    cout<<"La Pelicula: "<<titulo<<" Ha Sido Agregada a Mi Lista"<<endl;
}

void Pelicula::quitarDeLista(){
    cout<<"La Pelicula: "<<titulo<<" Ha Sido Eliminada de Mi Lista"<<endl;
}