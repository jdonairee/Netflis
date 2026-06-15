#include "GestorCuenta.h"
GestorCuenta::GestorCuenta(){
}
void GestorCuenta::agregarCuenta(Cuenta c){
    cuentas.push_back(c);
}
void GestorCuenta::eliminarCuenta(Cuenta c){
    for(auto cc=cuentas.begin(); cc!=cuentas.end();++cc){
        if(cc->getNombre()==c.getNombre()){
            cuentas.erase(cc);
            break;
        }
    }
}
Cuenta GestorCuenta::buscarCuenta(string nombre){
    for(Cuenta &c : cuentas){
        if(c.getNombre()==nombre){
            return c;
        }
    }throw runtime_error("Account Not Found-Cuenta No Encontrada: "+nombre);
}
