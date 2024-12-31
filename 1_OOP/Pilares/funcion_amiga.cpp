#include <iostream>
using namespace std;

class A {
    int x;

public:
    A(int y) {
        x = y;
    }

    // Declaración de función amiga
    friend void print(A &obj);
};

// Definición de la función amiga
void print(A &obj) {
    cout << obj.x << endl; // Acceso al miembro privado 'x'
}

int main() {
    A obj(10); // Crear un objeto de la clase A
    print(obj); // Llamar a la función amiga
    return 0;
}

// SALIDA:
// 10
