#include <iostream>
#include "arreglo.h"
#include "arreglo.cpp"
using namespace std;

void modificar(int *a)
{
    *a = *a + 1;
}

int main() 
{
    ArregloDinamico arreglo;
    arreglo.insertar_final("Mensaje1");
    arreglo.insertar_final("Mensaje2");
    arreglo.insertar_final("Mensaje3");
    arreglo.insertar_final("Mensaje4");
    arreglo.insertar_final("Mensaje5");
    arreglo.insertar_final("Mensaje6");
    arreglo.insertar_final("Mensaje7");
    arreglo.insertar_final("Mensaje8");
    arreglo.insertar_inicio("Ultimo_mensaje_1");
    arreglo.insertar_inicio("Ultimo_mensaje_2");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    

    // int *b = nullptr;
    // b = new int[100];
    // cout << b << " " << *b << endl;
    // delete[] b;
    // int a = 12;

    // cout << a << endl;
    // cout << &a << endl;
    // modificar(&a);
    // cout << a << endl;


    return 0;
}
