#include <iostream>
using namespace std;

class Example {
public:
    Example() {
        cout << "Constructor invocado." << endl;
    }

    ~Example() {
        cout << "Destructor invocado." << endl;
    }
};

int main() {
    cout << "Creando un objeto en el stack:" << endl;
    Example obj; // Se invoca automáticamente el constructor

    cout << "Creando un objeto en el heap:" << endl;
    Example* objHeap = new Example(); // Se invoca el constructor

    cout << "Eliminando el objeto del heap:" << endl;
    delete objHeap; // Se invoca explícitamente el destructor

    cout << "El programa está por terminar:" << endl;
    // El destructor para el objeto en el stack se invoca automáticamente aquí

    return 0;
}


