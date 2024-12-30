#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius; // Miembro de datos privado

public:
    // Método para establecer el radio
    void setRadius(double r) {
        if (r > 0) {
            radius = r;
        } else {
            cout << "El radio debe ser positivo." << endl;
        }
    }

    // Método para calcular el área
    double getArea() {
        return M_PI * radius * radius; // Lógica interna oculta
    }
};

int main() {
    Circle circle;

    // Interacción con una interfaz simplificada
    circle.setRadius(5.0);
    cout << "El área del círculo es: " << circle.getArea() << endl;

    return 0;
}
