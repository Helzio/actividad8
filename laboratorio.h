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
    void agregarComputadora(const Computadora&);
    void mostrarComputadoras();

    friend Laboratorio& operator << (Laboratorio& l, const Computadora &c){
        l.agregarComputadora(c);
        return l;
    }
};

#endif