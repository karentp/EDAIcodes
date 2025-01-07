#include <iostream>  // Incluye la libreria para entrada y salida
using namespace std; // Permite usar los elementos del espacio de nombres estandar directamente

int main() {
    int number1, number2, sum;  // Declara las variables para almacena los numeros y la suma

    // Solicita al usuario que ingrese el primer número
    cout << "Enter first number: ";
    cin >> number1;

    // Solicita al usuario que ingrese el segundo número
    cout << "Enter second number: ";
    cin >> number2;

    // Calcula la suma de los dos números
    sum = number1 + number2;

    // Muestra la suma en la consola
    cout << "Sum = " << sum << "\n";

    return 0; // Indica que el programa terminó correctamente
}
