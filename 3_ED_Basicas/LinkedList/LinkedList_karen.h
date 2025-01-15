#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"  // Incluir la definición de la clase Node

using namespace std;

class LinkedList {
    private:
        Node* head;   // Puntero al primer nodo de la lista enlazada
        Node* tail;   // Puntero al último nodo de la lista enlazada
        int length;   // Longitud de la lista enlazada

    public:
        // Constructor que inicializa la lista enlazada con un nodo inicial
        LinkedList(int value) {
            Node* newNode = new Node(value);  // Crear un nuevo nodo con el valor dado
            head = newNode;                   // Establecer el nuevo nodo como la cabeza de la lista
            tail = newNode;                   // Establecer el nuevo nodo como la cola de la lista
            length = 1;                       // Inicializar la longitud de la lista en 1
        }

        void printList(){
            Node* temp = head;  // Iniciar desde la cabeza de la lista
            while (temp != nullptr) {
                cout << temp->value << " ";  // Imprimir el valor del nodo actual
                temp = temp->next;           // Mover al siguiente nodo
            }
        }

        // Función para agregar un nuevo nodo al final de la lista
        void append(int value) {
            Node* newNode = new Node(value);  // Crear un nuevo nodo con el valor dado
            tail->next = newNode;             // Enlazar el nuevo nodo al final de la lista
            tail = newNode;                   // Actualizar el puntero tail
            length++;                         // Incrementar la longitud de la lista
        }

        void getHead(){
            cout << "Head: " << head->value << endl;
        }

        void getTail(){
            cout << "Tail: " << tail->value << endl;
        }

        void getLength(){
            cout << "Length: " << length << endl;
        }
        // Función para eliminar el último nodo de la lista usando temp y pre
        void deleteLast_pre() {
            if (length == 0) {  // Caso: la lista está vacía
                cout << "La lista ya está vacía." << endl;
                return;
            }

            if (length == 1) {  // Caso: la lista tiene un solo nodo
                delete head;     // Eliminar el único nodo
                head = nullptr;  // Actualizar head a nullptr
                tail = nullptr;  // Actualizar tail a nullptr
            } else {  // Caso: la lista tiene múltiples nodos
                Node* temp = head;      // Puntero temporal para recorrer la lista
                Node* pre = nullptr;    // Puntero que seguirá a temp

                while (temp->next != nullptr) {  // Recorrer hasta el último nodo
                    pre = temp;                  // pre apunta al nodo actual
                    temp = temp->next;           // temp avanza al siguiente nodo
                }

                delete temp;         // Eliminar el último nodo (al que apunta temp)
                tail = pre;          // Actualizar tail al penúltimo nodo
                tail->next = nullptr; // Establecer tail->next como nullptr
            }

            length--;  // Decrementar la longitud de la lista
        }

        // Función mas eficiente para eliminar el último nodo de la lista
        void deleteLast() {
            if (length == 0) {  // Caso: la lista está vacía
                cout << "La lista ya está vacía." << endl;
                return;
            }
            
            if (length == 1) {  // Caso: la lista tiene un solo nodo
                delete head;     // Eliminar el único nodo
                head = nullptr;  // Actualizar head a nullptr
                tail = nullptr;  // Actualizar tail a nullptr
            } else {  // Caso: la lista tiene múltiples nodos
                Node* temp = head;
                while (temp->next != tail) {  // Recorrer hasta el penúltimo nodo
                    temp = temp->next;
                }
                delete tail;      // Eliminar el nodo final
                tail = temp;      // Actualizar tail al penúltimo nodo
                tail->next = nullptr;  // Establecer el siguiente de tail como nullptr
            }
            
            length--;  // Decrementar la longitud de la lista
        }

        // Función para obtener un puntero al nodo en un índice específico
        Node* getNode(int index) {
            if (index < 0 || index >= length) {  // Verificar si el índice es válido
                cout << "Índice inválido." << endl;
                return nullptr;
            }

            Node* temp = head;
            for (int i = 0; i < index; i++) {  // Recorrer la lista hasta el índice
                temp = temp->next;
            }

            return temp;  // Devolver el puntero al nodo en el índice dado
        }


        void setNode(int index, int value){
            if (index < 0 || index >= length) {
                cout << "Índice inválido." << endl;
                return;
            }

            Node* temp = head;
            for (int i = 0; i < index; i++) {
                temp = temp->next;
            }

            temp->value = value;
            cout << "Valor en el índice " << index << " actualizado a: " << value << endl;
        
        }

        void insertNode(int index, int value){
            if (index < 0 || index > length) {
                cout << "Índice inválido." << endl;
                return;
            }

            if (index == 0) {  // Insertar al principio
                Node* newNode = new Node(value);
                newNode->next = head;
                head = newNode;
                length++;
            } else if (index == length) {  // Insertar al final
                append(value);
            } else {  // Insertar en el medio
                Node* newNode = new Node(value);
                Node* temp = head;
                for (int i = 0; i < index - 1; i++) {
                    temp = temp->next;
                }
                newNode->next = temp->next;
                temp->next = newNode;
                length++;
            }
        }

        // Función para eliminar un nodo con un valor específico de la lista
        // Función para eliminar un nodo con un valor específico de la lista usando getNode()
        void deleteNode_pre(int value) {
            if (length == 0) {  // Caso: la lista está vacía
                cout << "La lista ya está vacía." << endl;
                return;
            }

            if (head->value == value) {  // Caso: el nodo a eliminar es el head
                Node* temp = head;
                head = head->next;
                delete temp;
                length--;
                if (length == 0) {  // Si la lista quedó vacía, actualizar tail
                    tail = nullptr;
                }
                return;
            }

            // Obtener el nodo anterior usando getNode()
            Node* pre = getNode(index - 1);
            Node* temp = prev->next; 

            if (temp == tail) {  // Si el nodo a eliminar es el tail, actualizar tail
                tail = pre;
            }

            delete temp;  // Eliminar el nodo
            length--;     // Decrementar la longitud
        }

         // Función para eliminar un nodo con un valor específico de la lista con temp
        void deleteNode(int index){
            if (index < 0 || index >= length) {
                cout << "Índice inválido." << endl;
                return;
            }

            if (index == 0) {  // Eliminar el primer nodo
                Node* temp = head;
                head = head->next;
                delete temp;
                length--;
            } else {
                Node* temp = head;
                for (int i = 0; i < index - 1; i++) {
                    temp = temp->next;
                }
                Node* nodeToDelete = temp->next;
                temp->next = nodeToDelete->next;
                delete nodeToDelete;
                length--;
            }
        }


};

#endif // LINKEDLIST_H
