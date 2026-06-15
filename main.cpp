#include <iostream>
#include "Plataforma.h"
#include "Cuenta.h"
#include "Pelicula.h"
#include "Serie.h"
#include "Evento.h"
#include "Temporada.h"
#include "Episodio.h"

using namespace std;

int main() {

    Plataforma plataforma("Netflis");
    plataforma.cargarCatalogo("Catalogo.txt");

    cout << "-----Catalogo Cargado con Exito!-----" << endl;
    cout << "Duracion total del catalogo: " << plataforma.calcularDuracionTotal() << " minutos" << endl;
    cout << endl;

    
    Serie* serieNueva = new Serie(1000, "Avatar: La Leyenda de Aang", "Comedia", 2005, "B15", 1403, "Dave Filoni");

    Temporada temporada1(1);
    temporada1.agregarEpisodio(new Episodio("Piloto", 23));
    temporada1.agregarEpisodio(new Episodio("El comienzo", 23));

    Temporada temporada2(2);
    temporada2.agregarEpisodio(new Episodio("El regreso", 23));
    temporada2.agregarEpisodio(new Episodio("El final", 23));

    serieNueva->agregarTemporada(temporada1);
    serieNueva->agregarTemporada(temporada2);

    plataforma.agregarContenido(serieNueva);

    cout << "-----Se Agrego una Serie Nueva!" << endl;
    serieNueva->mostrarInfo();
    cout << endl;

    
    Cuenta cuentaAdulto("Lionel", "Adulto");
    Cuenta cuentaKid("Gilberto", "Kid");

    
    vector<Contenido*> resultadosToyStory = plataforma.buscar("Toy Story");
    Contenido* toyStory = resultadosToyStory.empty() ? nullptr : resultadosToyStory[0];

    vector<Contenido*> resultadosJoker = plataforma.buscar("Joker");
    Contenido* joker = resultadosJoker.empty() ? nullptr : resultadosJoker[0];

    cout << "-----Cuentas de Adultos-----" << endl;
    if (toyStory != nullptr) {
        cuentaAdulto.agregarAListaPersonal(toyStory);
        cuentaAdulto.darLikeContenido(toyStory);
    }
    if (joker != nullptr) {
        cuentaAdulto.agregarAListaPersonal(joker);
        cuentaAdulto.darLikeContenido(joker);
    }
    cuentaAdulto.verMiLista();
    cuentaAdulto.verLikes();
    cout << endl;

    cout << "-----Cuentas de Niños-----" << endl;
    if (toyStory != nullptr) {
        cuentaKid.agregarAListaPersonal(toyStory); 
        cuentaKid.darLikeContenido(toyStory);
    }
    if (joker != nullptr) {
        cuentaKid.agregarAListaPersonal(joker); 
        cuentaKid.darLikeContenido(joker);      
    }
    cuentaKid.verMiLista();
    cuentaKid.verLikes();
    cout << endl;

    
    cout << "===== DURACION TOTAL ACTUALIZADA =====" << endl;
    cout << "Duracion total del catalogo: " << plataforma.calcularDuracionTotal() << " minutos" << endl;
    cout << endl;

    
    plataforma.eliminarContenido(serieNueva);

    cout << "===== DURACION TOTAL TRAS ELIMINAR LA SERIE =====" << endl;
    cout << "Duracion total del catalogo: " << plataforma.calcularDuracionTotal() << " minutos" << endl;

    return 0;
}