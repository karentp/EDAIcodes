#include <iostream>
#include <string>
#include <cmath> // Para std::pow

using namespace std;

// 1. Función hash simple: suma de valores ASCII
int simpleHash(const string& key) {
    int hashValue = 0;
    for (char c : key) {
        hashValue += static_cast<int>(c); // Suma de valores ASCII
    }
    return hashValue;
}

// 2. Función hash con producto y módulo
int hashConModulo(const string& key, int primo = 31) {
    int hashValue = 0;
    for (size_t i = 0; i < key.length(); i++) {
        hashValue += static_cast<int>(key[i]) * std::pow(primo, i); // Producto de ASCII y potencia del primo
        hashValue %= 1000000007; // Módulo para evitar desbordamiento
    }
    return hashValue;
}

// 3. Función hash basada en resto
int hashPorResto(const string& key, int tableSize = 10) {
    int hashValue = 0;
    for (char c : key) {
        hashValue += static_cast<int>(c); // Suma de valores ASCII
    }
    return hashValue % tableSize; // Devuelve el resto según el tamaño de la tabla
}

// 4. Función hash con operaciones bit a bit
int hashBitwise(const string& key) {
    int hashValue = 0;
    for (char c : key) {
        hashValue = (hashValue << 5) + hashValue + static_cast<int>(c); // Hash = Hash * 33 + ASCII
    }
    return hashValue & 0x7FFFFFFF; // Limita a 31 bits (entero positivo)
}

// Función principal para probar las funciones hash
int main() {
    string key = "Hola Mundo";

    // Probar simpleHash
    cout << "Hash simple: " << simpleHash(key) << endl;

    // Probar hashConModulo
    cout << "Hash con módulo: " << hashConModulo(key) << endl;

    // Probar hashPorResto
    cout << "Hash por resto: " << hashPorResto(key) << endl;

    // Probar hashBitwise
    cout << "Hash bitwise: " << hashBitwise(key) << endl;

    return 0;
}
