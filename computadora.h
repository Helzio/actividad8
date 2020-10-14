#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>

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

    friend std::ostream& operator << (std::ostream &out, const Computadora &c){
       
        out << std::left;
        out << std::setw(33) << c.modelo;
        out << std::setw(30) << c.so ;
        out << std::setw(13) << c.ram;
        out << std::setw(30) << c.procesador;
        return out;
    }

    friend std::istream& operator >> (std::istream &in, Computadora &c){

        std::cout << "Modelo: ";
        getline(std::cin, c.modelo);

        std::cout << "Sistema Operativo: ";
        getline(std::cin, c.so);

        std::cout << "Ram: ";
        getline(std::cin, c.ram);

        std::cout << "Procesador: ";
        getline(std::cin, c.procesador);

        return in;
    }
};

#endif

