struct {             // Declaración de estructura
  int myNum;         // Miembro (variable int)
  string myString;   // Miembro (variable string)
} myStructure;       // Variable de la estructura


// Crear una variable de estructura llamada myStructure
struct {
  int myNum;
  string myString;
} myStructure;

// Asignar valores a los miembros de myStructure
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Imprimir los miembros de myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";

struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3; // Varias variables de estructura separadas por comas

struct {
  string brand;
  string model;
  int year;
} myCar1, myCar2; // Podemos agregar variables separándolas con una coma aquí

// Asignar datos a la primera estructura
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Asignar datos a la segunda estructura
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Imprimir los miembros de la estructura
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

