#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <vector>
#include <string>
#include "Node.h"

using namespace std;

class HashTable {
    private:
        static const int SIZE = 7;  // Tamaño fijo de la tabla hash
        Node* dataMap[SIZE] = {nullptr};  // Inicializa la tabla hash con punteros nulos

        // Función hash: calcula un índice a partir de la clave proporcionada
        int hash(string key) {
            int hash = 0;
            for (int i = 0; i < key.length(); i++) {
                int asciiValue = int(key[i]);  // Obtiene el valor ASCII del carácter
                hash = (hash + asciiValue * 23) % SIZE;  // Calcula el hash
            }
            return hash;  // Devuelve el índice calculado
        }

    public:
        // Destructor: libera la memoria de todos los nodos
        ~HashTable() {
            for (int i = 0; i < SIZE; i++) {
                Node* head = dataMap[i];
                Node* temp = head;
                while (head) {
                    head = head->next;
                    delete temp;
                    temp = head;
                }
            }
        }
        
        // Método para imprimir el contenido de la tabla hash
        void printTable() {
            for (int i = 0; i < SIZE; i++) {
                cout << i << ":" << endl;
                if (dataMap[i]) {
                    Node* temp = dataMap[i];
                    while (temp) {
                        cout << "   {" << temp->key << ", " << temp->value << "}" << endl;
                        temp = temp->next;
                    }
                }
            }
        }
        
        // Método para agregar un nuevo par clave-valor a la tabla hash
        void set(string key, int value) {
            int index = hash(key);
            Node* newNode = new Node(key, value);
            if (dataMap[index] == nullptr) {
                dataMap[index] = newNode;
            } else {
                Node* temp = dataMap[index];
                while (temp->next != nullptr) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
    
        // Método para obtener el valor asociado a una clave
        int get(string key) {
            int index = hash(key);
            Node* temp = dataMap[index];
            while (temp != nullptr) {
                if (temp->key == key) return temp->value;
                temp = temp->next;
            }
            return 0;  // Si no encuentra la clave, devuelve 0
        }
};

#endif // HASHTABLE_H
