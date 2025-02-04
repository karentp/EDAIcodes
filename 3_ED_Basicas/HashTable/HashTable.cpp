#include <iostream>
#include "HashTable.h"

using namespace std;

int main() {
    // Crear la tabla hash
    HashTable* myHashTable = new HashTable();

    // Establecer valores en la tabla hash
    myHashTable->set("clavos", 100);
    myHashTable->set("alicates", 50);
    myHashTable->set("tornillos", 80);

    // Obtener y mostrar valores
    cout << "alicates: " << myHashTable->get("alicates") << endl;
    cout << "tornillos: " << myHashTable->get("tornillos") << endl;

    // Liberar memoria asignada dinámicamente
    delete myHashTable;

    return 0;
}
