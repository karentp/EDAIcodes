#include <iostream>
#include <vector>
using namespace std;

// Función para mostrar los elementos del vector
void mostrarVector(const vector<string>& cars) {
    for (string car : cars) {
        cout << car << "\n";
    }
}

// Función para modificar elementos del vector
void modificarElementos(vector<string>& cars) {
    cars[0] = "Opel";
    cars.at(1) = "Audi";
}

// Función para agregar elementos al vector
void agregarElementos(vector<string>& cars) {
    cars.push_back("Tesla");
    cars.push_back("VW");
}

// Función para eliminar el último elemento del vector
void eliminarUltimoElemento(vector<string>& cars) {
    cars.pop_back();
}

// Función para mostrar el tamaño del vector
void mostrarTamano(const vector<string>& cars) {
    cout << "Tamaño del vector: " << cars.size() << endl;
}

// Función para comprobar si el vector está vacío
void comprobarVacio(const vector<string>& cars) {
    cout << "El vector está vacío: " << (cars.empty() ? "Si" : "No") << endl;
}

// Función para vaciar el vector
void vaciarVector(vector<string>& cars) {
    cars.clear();
}

int main() {
    // Crear un vector de tipo string y agregar elementos durante la declaración
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << "Elementos del vector inicial:" << endl;
    mostrarVector(cars);

    // Modificar elementos del vector
    modificarElementos(cars);
    cout << "\nElementos después de modificación:" << endl;
    mostrarVector(cars);

    // Agregar nuevos elementos al vector
    agregarElementos(cars);
    cout << "\nElementos después de agregar nuevos elementos:" << endl;
    mostrarVector(cars);

    // Eliminar el último elemento del vector
    eliminarUltimoElemento(cars);
    cout << "\nElementos después de eliminar el último elemento:" << endl;
    mostrarVector(cars);

    // Mostrar el tamaño del vector
    mostrarTamano(cars);

    // Comprobar si el vector está vacío
    comprobarVacio(cars);

    // Vaciar el vector y comprobar nuevamente
    vaciarVector(cars);
    cout << "El vector está vacío después de clear(): " << (cars.empty() ? "Si" : "No") << endl;

    return 0;
}
