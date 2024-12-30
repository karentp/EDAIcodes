#include <iostream>
using namespace std;

class Parent {
public:
    int x;  // Público
protected:
    int y;  // Protegido
private:
    int z;  // Privado
};

// La clase Child1 hereda de la clase Parent públicamente
class Child1 : public Parent {
    // x permanecerá público (puede ser accesible)
    // y permanecerá protegido (puede ser accesible)
    // z permanecerá privado (no será accesible)
};

// La clase Child2 hereda de la clase Parent privadamente
class Child2 : private Parent {
    // x será privado (puede ser accesible)
    // y será privado (puede ser accesible)
    // z será privado (no será accesible)
};

// La clase Child3 hereda de la clase Parent protegidamente
class Child3 : protected Parent {
    // x será protegido (puede ser accesible)
    // y será protegido (puede ser accesible)
    // z será privado (no será accesible)
};

int main() {
    Parent p;
    p.x; // Público, por lo tanto, se puede acceder desde cualquier parte del código
    return 0;
}
