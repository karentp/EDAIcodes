#include <iostream>
#include <vector>
using namespace std;

// Función 1: Imprime "Hello World" 5 veces
void loop1() {
    for (int i = 1; i <= 5; i++) {
        cout << "Hello World\n";
    }
}

// Función 2: Imprime los elementos de un arreglo usando un bucle basado en rango
void loop2() {
    int arr[] = {40, 50, 60, 70, 80, 90, 100};
    for (auto element : arr) {
        cout << element << " ";
    }
    cout << "\n";
}

// Función 3: Bucle complejo con múltiples variables
void loop3() {
    for (int i = 0, j = 10, k = 20; (i + j + k) < 100; j++, k--, i += k) {
        cout << i << " " << j << " " << k << "\n";
    }
}

// Función 4: Demuestra el alcance de la variable `i` dentro de un bucle
void loop4() {
    int i = 99;
    for (int i = 0; i < 5; i++) {
        cout << i << "\t";
    }
    cout << "\nValor externo de i: " << i << "\n";
}

// Función 5: Modifica directamente `i` en el bucle
void loop5() {
    int i = 99;
    for (i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << "\nValor final de i: " << i << "\n";
}

// Función 6: Itera a través de un vector usando un iterador
void loop6() {
    vector<int> v = {1, 2, 3, 4, 5};
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << "\t";
    }
    cout << "\n";
}

// Función principal
int main() {
    // Arreglo de punteros a funciones
    void (*loops[])() = {loop1, loop2, loop3, loop4, loop5, loop6};

    int choice;

    // Menú para seleccionar qué bucle ejecutar
    cout << "Selecciona un bucle para ejecutar:\n";
    cout << "1. Imprimir 'Hello World' 5 veces\n";
    cout << "2. Imprimir los elementos de un arreglo\n";
    cout << "3. Bucle complejo con múltiples variables\n";
    cout << "4. Demostrar el alcance de la variable `i`\n";
    cout << "5. Modificar `i` directamente en el bucle\n";
    cout << "6. Iterar a través de un vector usando un iterador\n";
    cout << "Introduce tu elección (1-6): ";
    cin >> choice;

    // Ejecuta la función correspondiente si la elección está en el rango válido
    if (choice >= 1 && choice <= 6) {
        loops[choice - 1]();  // Llama a la función seleccionada
    } else {
        cout << "Elección inválida. Por favor, introduce un número entre 1 y 6.\n";
    }

    return 0;
}
