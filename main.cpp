#include "computadora.h"
#include "laboratorio.h"

int main(){
    Laboratorio lab = Laboratorio();

    Computadora c1 = Computadora();
    c1.setModelo("HP Spectre x360 (2020)");
    c1.setSo("Windows 10");
    c1.setRam("16GB");
    c1.setProcesador("10th-generation Intel Core i7");

    Computadora c2 = Computadora();
    c2.setModelo("Dell XPS 13");
    c2.setSo("Windows 10");
    c2.setRam("16GB");
    c2.setProcesador("8th-generation Intel Core i7");

    Computadora c3 = Computadora();
    c3.setModelo("Huawei MateBook 13");
    c3.setSo("Windows 10");
    c3.setRam("8GB");
    c3.setProcesador("8th-generation Intel Core i7");

    Computadora c4 = Computadora("MacBook Pro (16-inch, 2019)", "MacOs Catalina", "64GB", "9th-generation Intel Core i7");
    Computadora c5 = Computadora("Alienware Area-51m", "Windows 10", "64GB", "Intel Core i9-9900K ");
    Computadora c6 = Computadora("Microsoft Surface Laptop 3", "Windows 10", "16GB", "Intel Core i7");

    lab.agregarComputadora(c1);
    lab.agregarComputadora(c2);
    lab.agregarComputadora(c3);
    lab.agregarComputadora(c4);
    lab.agregarComputadora(c5);
    lab.agregarComputadora(c6);

    lab.mostrarComputadoras();

    return 0;
}