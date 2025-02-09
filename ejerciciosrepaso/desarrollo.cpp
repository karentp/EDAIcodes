#include <iostream>
using namespace std;

// Definición del nodo para la lista enlazada
struct Node {
    int data;
    Node* next;
    Node(int v) : data(v), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    // Método para insertar un nodo al inicio de la lista
    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // TODO: Implementar el método para eliminar un nodo con un valor específico
    void deleteNode(int value) {

        // Implementar aquí

    }

    // Método para imprimir la lista enlazada
    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insert(3);
    list.insert(5);
    list.insert(7);
    list.printList(); // Salida esperada: 7 5 3

    list.deleteNode(5);
    list.printList(); // Salida esperada: 7 3

    return 0;
}


---------

#include <iostream>
using namespace std;

// Definición del nodo para la lista doblemente enlazada
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int v) : data(v), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
public:
    DoublyLinkedList() : head(nullptr) {}

    // Método para insertar un nodo al inicio de la lista
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head) {
            head->prev = newNode;
            newNode->next = head;
        }
        head = newNode;
    }

    // TODO: Implementar el método para invertir la lista
    void reverse() {

	Node* current = head; 
Node* temp = nullptr; 
while (current) {
        // Implementar aquí
    }
// Implementar aquí
}

    // Método para imprimir la lista
    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.printList(); // Salida esperada: 30 20 10

    list.reverse();
    list.printList(); // Salida esperada: 10 20 30

    return 0;
}


_-------

#include <iostream>
#include <stack>
using namespace std;

class UndoableStack {
private:
    stack<int> mainStack;  // Pila principal
    stack<int> undoStack;  // Pila de deshacer
public:
    // Método para insertar un elemento en la pila
    void push(int value) {
        mainStack.push(value);
    }

    // Método para eliminar el último elemento
    void pop() {
        if (!mainStack.empty()) {
            undoStack.push(mainStack.top());
            mainStack.pop();
        }
    }

    // TODO: Implementar el método undo() para restaurar el último elemento eliminado
    void undo() {
        // Implementar aquí
    }

    // Método para obtener el elemento en la cima
    int top() {
        return mainStack.empty() ? -1 : mainStack.top();
    }
};

int main() {
    UndoableStack s;
    s.push(5);
    s.push(10);
    s.push(15);
    cout << "Top: " << s.top() << endl; // Salida esperada: 15

    s.pop();
    cout << "Top after pop: " << s.top() << endl; // Salida esperada: 10

    s.undo();
    cout << "Top after undo: " << s.top() << endl; // Salida esperada: 15

    return 0;
}


------------

