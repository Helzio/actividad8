#include "laboratorio.h"
using namespace std;

Laboratorio::Laboratorio(){
    contador = 0;
}

void Laboratorio::agregarComputadora(const Computadora& c){
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
    cout << std::left;
    cout << std::setw(33) << "Modelo:";
    cout << std::setw(30) << "Sistema Operativo:";
    cout << std::setw(13) << "Ram:";
    cout << std::setw(30) << "Procesador:" << endl;

    for (size_t i = 0; i < contador; i++){
        cout << computadoras[i] << endl;
    }
    cout << endl << endl;
}
