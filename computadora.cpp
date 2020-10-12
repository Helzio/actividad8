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

void Computadora::setSo(const string& s){
    so = s;
}

void Computadora::setRam(const string& s){
    ram = s;
}

void Computadora::setModelo(const string& s){
    modelo = s;
}

void Computadora::setProcesador(const string& s){
    procesador = s;
}

// toString
string Computadora::toString(){
    string s = "";
    s += "** COMPUTADORA **\n";
    s += "Modelo: ";
    s += modelo;
    s += "\n";
    s += "Sistema Operativo: ";
    s += so;
    s += "\n";
    s += "Memoria RAM: ";
    s += ram;
    s += "\n";
    s += "Procesador: ";
    s += procesador;
    s += "\n";

    return s;
}