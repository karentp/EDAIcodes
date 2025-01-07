#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    //Setter para la marca
    void setBrand(string b) {
        brand = b;
    }
    //Getter para la marca
    string getBrand() {
        return brand;
    }
    //Setter para el año
    void setYear(int y) {
        if (y > 1885) { // Validación para mantener un estado consistente
            year = y;
        } else {
            cout << "Año inválido." << endl;
        }
    }
    //Getter para el año
    int getYear() {
        return year;
    }
};

int main() {
    Car car1;
    car1.setBrand("Toyota");
    car1.setYear(2020);

    cout << "Marca: " << car1.getBrand() << ", Año: " << car1.getYear() << endl;

    car1.setYear(2025); // Modificación controlada
    cout << "Marca: " << car1.getBrand() << ", Año modificado: " << car1.getYear() << endl;

    return 0;
}

