#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.year = 2020;

    cout << "Marca: " << car1.brand << ", Año: " << car1.year << endl;

    car1.year = 2025; // Modificación directa sin control
    cout << "Marca: " << car1.brand << ", Año modificado: " << car1.year << endl;

    return 0;
}

