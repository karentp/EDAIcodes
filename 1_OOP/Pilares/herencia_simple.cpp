#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "Método de la clase padre." << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Método de la clase hija." << endl;
    }
};

int main() {
    Child obj;
    obj.display(); // Método heredado de la clase padre
    obj.show();    // Método de la clase hija
    return 0;
}
