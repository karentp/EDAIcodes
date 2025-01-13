#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    // Crear la lista enlazada con el primer valor 11
    LinkedList myList(11);

    // Agregar más nodos al final de la lista
    myList.append(3);   // Agregar 3 a la lista
    myList.append(23);  // Agregar 23 a la lista
    myList.append(7);   // Agregar 7 a la lista

    // Imprimir la lista enlazada
    cout << "Lista enlazada: ";
    myList.printList();
    cout << endl;

    // Obtener y mostrar la cabeza de la lista
    myList.getHead();

    // Obtener y mostrar la cola de la lista
    myList.getTail();

    // Obtener y mostrar la longitud de la lista
    myList.getLength();
    cout << endl;

    // Agregar un nodo al principio de la lista
    cout << "Agregando 1 al principio de la lista..." << endl;
    myList.prepend(1);
    cout << "Lista enlazada después de agregar al principio: ";
    myList.printList();
    cout << endl;

    // Insertar un nodo en un índice específico
    cout << "Insertando 15 en el índice 2..." << endl;
    myList.insert(2, 15);
    cout << "Lista enlazada después de insertar: ";
    myList.printList();
    cout << endl;

    // Establecer un nuevo valor en un nodo específico
    cout << "Estableciendo el valor 100 en el índice 3..." << endl;
    if (myList.set(3, 100)) {
        cout << "Valor establecido con éxito." << endl;
    } else {
        cout << "Error al establecer el valor." << endl;
    }
    cout << "Lista enlazada después de establecer el valor: ";
    myList.printList();
    cout << endl;

    // Eliminar el primer nodo
    cout << "Eliminando el primer nodo..." << endl;
    myList.deleteFirst();
    cout << "Lista enlazada después de eliminar el primer nodo: ";
    myList.printList();
    cout << endl;

    // Eliminar el último nodo
    cout << "Eliminando el último nodo..." << endl;
    myList.deleteLast();
    cout << "Lista enlazada después de eliminar el último nodo: ";
    myList.printList();
    cout << endl;

    // Eliminar un nodo en un índice específico
    cout << "Eliminando el nodo en el índice 1..." << endl;
    myList.deleteNode(1);
    cout << "Lista enlazada después de eliminar el nodo: ";
    myList.printList();
    cout << endl;

    // Obtener el valor de un nodo en un índice específico
    int index = 1;
    Node* node = myList.get(index);
    if (node) {
        cout << "Valor en el índice " << index << ": " << node->value << endl;
    } else {
        cout << "Índice inválido." << endl;
    }

    return 0;
}
