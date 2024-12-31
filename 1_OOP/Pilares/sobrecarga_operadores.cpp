#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int img;

    // Constructor para inicializar los valores
    Complex(int x, int y) {
        real = x;
        img = y;
    }

    // Sobrecarga del operador +
    Complex operator+(Complex &c) {
        Complex ans(0, 0);
        ans.real = real + c.real; // Suma de las partes reales
        ans.img = img + c.img;    // Suma de las partes imaginarias
        return ans;
    }
};

int main() {
    Complex c1(1, 2); // Primer número complejo
    Complex c2(1, 3); // Segundo número complejo

    Complex c3 = c1 + c2; // Uso del operador sobrecargado +
    cout << c3.real << " i" << c3.img << endl; // Imprime el resultado

    return 0;
}

// SALIDA:
// 2 i5
