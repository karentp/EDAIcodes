// Programa en C++ para demostrar bucles infinitos
// utilizando bucles for y while

// Descomenta las secciones para ver la salida
#include <iostream>
using namespace std;
int main()
{
    int i;

    // Este es un bucle for infinito ya que la expresión
    // de la condición está en blanco
    for (;;) {
        cout << "Este bucle se ejecutará para siempre.\n";
    }

    // Este es un bucle while infinito ya que la condición
    // dada en el bucle while seguirá repitiéndose infinitamente
    /*
    while (i != 0)
    {
        i--;
        cout << "Este bucle se ejecutará para siempre.\n";
    }
    */

    // Este es un bucle while infinito ya que la condición
    // dada en el bucle while es "true"
    /*
    while (true)
    {
        cout << "Este bucle se ejecutará para siempre.\n";
    }
    */
}
