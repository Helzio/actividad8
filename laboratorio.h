#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>
#include "computadora.h"

class Laboratorio{
private:
    Computadora computadoras[5];
    size_t contador;
public:
    Laboratorio();
    void agregarComputadora(Computadora&);
    void mostrarComputadoras();
};

#endif