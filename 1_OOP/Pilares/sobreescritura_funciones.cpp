#include <iostream>
using namespace std;

class Parent {
public:
    virtual void Print() { // Método virtual para habilitar el polimorfismo
        cout << "CLASE PARENT" << endl;
    }

    void show() { // Método no virtual
        cout << "Parent show" << endl;
    }
};

class Child : public Parent {
public:
    void Print() { // Sobrescritura del método virtual
        cout << "Child CLASS" << endl;
    }

    void show() { // Sobrescritura del método no virtual
        cout << "Child show" << endl;
    }
};

int main() {
    Parent *p; // Puntero de tipo clase base
    Child c;

    p = &c; // Apuntando al objeto de la clase derivada
    p->Print(); // Llama al método Print() de la clase derivada debido al polimorfismo
    p->show();  // Llama al método show() de la clase base, ya que no es virtual

    return 0;
}

// SALIDA:
// Child CLASS
// Parent show
