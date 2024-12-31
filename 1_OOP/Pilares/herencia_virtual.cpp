#include <iostream>
using namespace std;

class Parent {
public:
    Parent() {
        cout << "CLASE PARENT" << endl;
    }
};

class Child1 : virtual public Parent {
public:
    Child1() {
        cout << "CLASE CHILD1" << endl;
    }
};

class Child2 : virtual public Parent {
public:
    Child2() {
        cout << "CLASE CHILD2" << endl;
    }
};

class GrandChild : public Child1, public Child2 {
public:
    GrandChild() {
        cout << "CLASE GRANDCHILD" << endl;
    }
};

int main() {
    GrandChild gc; // Constructor de Parent se llama solo una vez
    return 0;
}

// SALIDA:
// CLASE PARENT
// CLASE CHILD1
// CLASE CHILD2
// CLASE GRANDCHILD
