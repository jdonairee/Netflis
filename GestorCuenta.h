#ifndef GESTORCUENTA_H
#define GESTORCUENTA_H
#include <iostream>
#include <vector>
#include "Cuenta.h"
using namespace std;
class GestorCuenta{
private:
    vector<Cuenta> cuentas;
public:
    GestorCuenta();
    void agregarCuenta(Cuenta c);
    void eliminarCuenta(Cuenta c);
    Cuenta buscarCuenta(string nombre);
};
#endif