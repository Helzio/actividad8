#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>
#include <fstream>
#include "computadora.h"

class Laboratorio{
private:
    Computadora computadoras[5];
    size_t contador;
public:
    Laboratorio();
    void agregarComputadora(const Computadora&);
    void mostrarComputadoras();
    void respaldar();
    void respaldar_tabla();
    void recuperar();

    friend Laboratorio& operator << (Laboratorio& l, const Computadora &c){
        l.agregarComputadora(c);
        return l;
    }
};

#endif