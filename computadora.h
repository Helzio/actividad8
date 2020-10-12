#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

class Computadora
{
private:
    std::string so;
    std::string ram;
    std::string modelo;
    std::string procesador;

public:
    Computadora();
    Computadora(std::string& modelo, std::string& so, std::string& ram, std::string& procesador);

    std::string getSo();
    std::string getRam();
    std::string getModelo();
    std::string getProcesador();

    void setSo(std::string&);
    void setRam(std::string&);
    void setModelo(std::string&);
    void setProcesador(std::string&);


    void toString();
};

#endif

