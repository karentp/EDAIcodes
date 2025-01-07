#include <iostream> // Para entrada y salida en C++
#include <string>   // Para usar la clase string
using namespace std;

// Ejemplo de una clase:
class student {
public:
    int student_id;        // Miembro de datos o propiedad de la clase student
    string student_name;   // Miembro de datos o propiedad de la clase student

    int add(int x, int y) { // Es una función o método de la clase student
        return x + y;
    }
};

// Función principal (main)
int main() {
    // Crear un objeto de la clase student
    student s;
    s.student_id = 1;
    s.student_name = "Karen";

    // Mostrar las propiedades del objeto
    cout << "ID del estudiante: " << s.student_id << endl;
    cout << "Nombre del estudiante: " << s.student_name << endl;

    // Usar el método add
    int result = s.add(5, 10);
    cout << "Resultado de add(5, 10): " << result << endl;

    return 0; // Indicar que el programa terminó correctamente
}
