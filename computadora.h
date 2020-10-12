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
    Computadora(const std::string& modelo, const std::string& so, const std::string& ram, const std::string& procesador);

    std::string getSo();
    std::string getRam();
    std::string getModelo();
    std::string getProcesador();

    void setSo(const std::string&);
    void setRam(const std::string&);
    void setModelo(const std::string&);
    void setProcesador(const std::string&);


    std::string toString();
};

#endif

