#include <iostream>
using namespace std;

class Sum {
public:
    void add(int x, int y) { // MÉTODO 1:
        int sum = x + y;
        cout << sum << endl;
    }

    void add(int x, int y, int z) { // MÉTODO 2:
        int sum = x + y + z;
        cout << sum << endl;
    }

    void add(float x, float y) { // MÉTODO 3:
        float sum = x + y;
        cout << sum << endl;
    }
};

int main() {
    Sum s;
    s.add(2, 3);                 // MÉTODO 1: Suma de 2 enteros
    s.add(2, 3, 4);              // MÉTODO 2: Suma de 3 enteros
    s.add(float(1.2), float(2.3)); // MÉTODO 3: Suma de 2 flotantes
    return 0;
}

// SALIDA:
// 5
// 9
// 3.5