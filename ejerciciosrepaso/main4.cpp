#include <iostream>
using namespace std;

void funcion(int *ptr) {
    *ptr = 20;
}

int main() {
    int x = 10;
    funcion(&x);
    cout << x << endl;
    return 0;
}
#include <iostream>
using namespace std;

class Coche {
public:
    string marca;
    int año;
};

int main() {
    Coche miCoche;
    miCoche.marca = "Toyota";
    miCoche.año = 2022;

    cout << miCoche.marca << " " << miCoche.año << endl;
    return 0;
}
void funcion(Nodo* cabeza) {
    Nodo* tmp = cabeza;
    while (tmp != nullptr) {
        cout << tmp->valor << " ";
        tmp = tmp->siguiente;
    }
    cout << endl;
}

#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    static const int SIZE = 5;
    vector<int> tabla[SIZE];  // Implementación con encadenamiento
public:
    int hashFuncion(int clave) {
        return clave % SIZE;
    }

    void insertar(int clave) {
        int index = hashFuncion(clave);
        tabla[index].push_back(clave);
    }

    void imprimir() {
        for (int i = 0; i < SIZE; i++) {
            cout << "Índice " << i << ": ";
            for (int num : tabla[i])
                cout << num << " ";
            cout << endl;
        }
    }
};

int main() {
    HashTable ht;
    ht.insertar(10);
    ht.insertar(15);
    ht.insertar(20);
    ht.insertar(25);
    ht.insertar(30);

    ht.imprimir();

    return 0;
}

#include <iostream>
#include <unordered_set>

using namespace std;

class Node {
    public:
        int value;
        Node* next;
        Node(int value) {
            this->value = value;
            next = nullptr;
        }
};

class LinkedList {
    private:
        Node* head;
        int length;
        
    public:
        LinkedList(int value) {
            Node* newNode = new Node(value);
            head = newNode;
            length = 1;
        }

        ~LinkedList() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }

        void printList() {
            Node* temp = head;
            if (temp == nullptr) {
                cout << "empty";
            } else {
                while (temp != nullptr) {
                    cout << temp->value;
                    temp = temp->next;
                    if (temp != nullptr) {
                        cout << " -> ";
                    }
                }
            }
            cout << endl;
        }

        void append(int value) {
            Node* newNode = new Node(value);
            if (head == nullptr) {
                head = newNode;
            } else {
                Node* currentNode = head;
                while (currentNode->next != nullptr) {
                    currentNode = currentNode->next;
                }
                currentNode->next = newNode;
            }
            length++;
        }

        // Implementa la función aquí
        void removeDuplicates();
};
