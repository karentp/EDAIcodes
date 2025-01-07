#include <iostream>
using namespace std;

class Parent1 {
public:
    Parent1() {
        cout << "CLASE PARENT1" << endl;
    }
};

class Child1 : public Parent1 {
public:
    Child1() {
        cout << "CLASE CHILD1" << endl;
    }
};

class Child2 : public Parent1 {
public:
    Child2() {
        cout << "CLASE CHILD2" << endl;
    }
};

int main() {
    Child1 c1; // Se crea un objeto de la clase Child1
    Child2 c2; // Se crea un objeto de la clase Child2
    return 0;
}

// SALIDA:
// CLASE PARENT1
// CLASE CHILD1
// CLASE PARENT1
// CLASE CHILD2
