#include "laboratorio.h"
using namespace std;

Laboratorio::Laboratorio()
{
    contador = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c)
{
    if (contador < 5)
    {
        computadoras[contador] = c;
        contador++;
    }
    else
    {
        cout << "Laboratorio lleno" << endl
             << endl;
    }
}

void Laboratorio::mostrarComputadoras()
{
    cout << std::left;
    cout << std::setw(33) << "Modelo:";
    cout << std::setw(30) << "Sistema Operativo:";
    cout << std::setw(13) << "Ram:";
    cout << std::setw(30) << "Procesador:" << endl;

    for (size_t i = 0; i < contador; i++)
    {
        cout << computadoras[i] << endl;
    }
    cout << endl
         << endl;
}

void Laboratorio::respaldar()
{
    ofstream archivo("laboratorio.txt");
    if (archivo.is_open())
    {
        for (size_t i = 0; i < contador; i++)
        {
            archivo << computadoras[i].getModelo() << endl;
            archivo << computadoras[i].getSo() << endl;
            archivo << computadoras[i].getRam() << endl;
            archivo << computadoras[i].getProcesador() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("laboratorio_tabla.txt");
    if (archivo.is_open())
    {
        archivo << std::left;
        archivo << std::setw(33) << "Modelo:";
        archivo << std::setw(30) << "Sistema Operativo:";
        archivo << std::setw(13) << "Ram:";
        archivo << std::setw(30) << "Procesador:" << endl;
        for (size_t i = 0; i < contador; i++)
        {
            archivo << computadoras[i] << endl;
        }
    }
    archivo.close();
}
