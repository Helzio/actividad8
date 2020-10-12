#include "computadora.h"
using namespace std;

// constructores
Computadora::Computadora(){

}

Computadora::Computadora(string& so, string& ram, string& modelo, string& procesador){
    this->modelo = modelo;
    this->so = so;
    this->ram = ram;
    this->procesador = procesador;
}

// getters
string Computadora::getSo(){
    return so;
}

string Computadora::getRam(){
    return ram;
}

string Computadora::getModelo(){
    return modelo;
}

string Computadora::getProcesador(){
    return procesador;
}

// setters

void Computadora::setSo(string& s){
    so = s;
}

void Computadora::setRam(string& s){
    ram = s;
}

void Computadora::setModelo(string& s){
    modelo = s;
}

void Computadora::setProcesador(string& s){
    procesador = s;
}

// toString
void Computadora::toString(){
    cout << "** COMPUTADORA **" << endl;
    cout << "Sistema Operativo: " << so << endl;
    cout << "Memoria RAM: " << ram << endl;
    cout << "Procesador: " << procesador << endl;
}