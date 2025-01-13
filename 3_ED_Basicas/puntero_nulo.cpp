#include <iostream>
using namespace std;

int main() {
    int* p = nullptr;  // Puntero nulo, no apunta a nada
    //cout << "El puntero apunta a: " << *p << "\n"; // Segmentation fault
    if (p == nullptr) {
        cout << "El puntero no apunta a ninguna dirección válida.\n";
    }

    int a = 10;
    p = &a;  // Ahora p apunta a la dirección de a

    if (p != nullptr) {
        cout << "El puntero apunta a: " << *p << "\n";
    }

    return 0;
}



