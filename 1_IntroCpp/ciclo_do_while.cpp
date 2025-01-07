// C++ program to Demonstrate do-while loop
#include <iostream>
using namespace std;

int main()
{
    int i = 2; // Initializacion

    do {
        // cuerpo del ciclo
        cout << "Hello World\n";

        // actualizacion
        i++;

    } while (i < 1); // expresion test

    return 0;
}