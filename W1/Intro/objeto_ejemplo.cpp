#include <iostream>
using namespace std;

// Clase:
class Fruit {
    // Propiedades de la clase
public:
    string name;
    string color;
};

int main()
{
    // Definiendo un objeto de la clase Fruit:
    // Método 1: Objeto creado en el stack
    Fruit apple; // Objeto
    apple.name = "Apple";
    apple.color = "Red";
    cout << apple.name << ":" << apple.color << endl;
    // SALIDA: Apple:Red

    // Definiendo un objeto de la clase Fruit:
    // Método 2: Objeto creado en el heap
    Fruit *mango = new Fruit();
    mango->name = "Mango";
    mango->color = "Yellow";
    cout << mango->name << ":" << mango->color << endl;
    // SALIDA: Mango:Yellow

    return 0;
}
