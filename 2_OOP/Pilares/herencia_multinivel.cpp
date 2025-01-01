#include <iostream>
using namespace std;

class Grandparent {
public:
    void grandparentMethod() {
        cout << "Método de la clase abuelo." << endl;
    }
};

class Parent : public Grandparent {
public:
    void parentMethod() {
        cout << "Método de la clase padre." << endl;
    }
};

class Child : public Parent {
public:
    void childMethod() {
        cout << "Método de la clase hija." << endl;
    }
};

int main() {
    Child obj;
    obj.grandparentMethod(); // Heredado de Grandparent
    obj.parentMethod();      // Heredado de Parent
    obj.childMethod();       // Propio de Child
    return 0;
}
