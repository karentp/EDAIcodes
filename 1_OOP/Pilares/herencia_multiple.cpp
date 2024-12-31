#include <iostream>
using namespace std;

class Parent1 {
public:
    Parent1() {
        cout << "CLASE PARENT1" << endl;
    }
};

class Parent2 {
public:
    Parent2() {
        cout << "CLASE PARENT2" << endl;
    }
};

class Child : public Parent1, public Parent2 {
public:
    Child() {
        cout << "CLASE CHILD" << endl;
    }
};

int main() {

    // Al crear un objeto de la clase hija, se invocan los constructores de ambas clases padres primero.
    Child c;
    return 0;
}

// SALIDA:
// CLASE PARENT1
// CLASE PARENT2
// CLASE CHILD
