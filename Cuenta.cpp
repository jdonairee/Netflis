#include "Cuenta.h"
#include "IListable.h"
#include "ILikeable.h"

Cuenta::Cuenta(string _nombre, string _tipo){
    nombre = _nombre;
    tipo = _tipo;
}

void Cuenta::agregarAListaPersonal(Contenido* c){
    if(puedeVer(c)){
        if(IListable* listable = dynamic_cast<IListable*>(c)){
            miLista.push_back(c);
            listable->agregarALista();
        } else {
            cout << "Este contenido no se puede agregar a Mi Lista." << endl;
        }
    } else {
        cout << "No puedes agregar este contenido por la clasificación." << endl;
    }
}

void Cuenta::darLikeContenido(Contenido* c){
    if(puedeVer(c)){
        if(ILikeable* likeable = dynamic_cast<ILikeable*>(c)){
            liked.push_back(c);
            likeable->darLike();
        } else {
            cout << "Este contenido no puede recibir like." << endl;
        }
    } else {
        cout << "No puedes dar like a este contenido por la clasificación." << endl;
    }
}

bool Cuenta::puedeVer(Contenido* c){
    if(tipo == "Adulto"){
        return true;
    }
    if(tipo == "Kid"){
        if(c->getClasificacion() == "A" || c->getClasificacion() == "AA"){
            return true;
        } else {
            return false;
        }
    }
    return false;
}

void Cuenta::verMiLista(){
    cout << "MI LISTA" << endl;
    for(Contenido* c : miLista){
        cout << c->getTitulo() << endl;
    }
}

void Cuenta::verLikes(){
    cout << "MIS LIKES" << endl;
    for(Contenido* c : liked){
        cout << c->getTitulo() << endl;
    }
}
string Cuenta::getNombre(){
    return nombre;
}
