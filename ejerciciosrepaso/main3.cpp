#include <iostream>
#include <stack>  // Biblioteca necesaria para usar stack
using namespace std;

int main() {
    stack<int> pila;  // Instanciación de la pila

    pila.push(5);
    pila.push(10);
    pila.push(15);

    cout << pila.top() << endl;  // Imprime el último elemento agregado (15)
    pila.pop();
    cout << pila.top() << endl;  // Imprime el nuevo elemento en la cima (10)

    return 0;
}
