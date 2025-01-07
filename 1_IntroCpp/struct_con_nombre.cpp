#include <iostream> // Para cout
#include <string>   // Para string
using namespace std; // Para evitar usar std:: antes de cout y string

struct myDataType { // Esta estructura se llama "myDataType"
  int myNum;
  string myString;
};

myDataType myVar;

// Declarar una estructura llamada "car"
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  // Crear una estructura de tipo "car" y almacenarla en myCar1
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Crear otra estructura de tipo "car" y almacenarla en myCar2
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  // Imprimir los miembros de la estructura
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
  return 0;
}
