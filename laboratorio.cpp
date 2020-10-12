#include "laboratorio.h"
using namespace std;

Laboratorio::Laboratorio(){
    contador = 0;
}

void Laboratorio::agregarComputadora(Computadora& c){
    if (contador < 5)
    {
            computadoras[contador] = c;
            contador++;
    }else
    {
        cout << "Laboratorio lleno" << endl << endl;
    }
    
}

void Laboratorio::mostrarComputadoras(){
    for (size_t i = 0; i <= contador; i++)
    {
        cout << computadoras[i].toString() << endl << endl;
    }
    
}