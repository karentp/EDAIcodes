#include <iostream>

int main() {
    int n = 10; 

    for (int i = 0; i < n; i++) { // Bucle O(n)
        std::cout << "Iteración " << i + 1 << std::endl;
    }

    return 0;
}


int main() {
    int n = 10; 

    for (int i = 0; i < n; i++) { // Bucle O(n)
        std::cout << "Iteración " << i + 1 << std::endl;
    }

    for (int i = 0; i < n; i++) { // Bucle O(n)
        std::cout << "Iteración " << i + 1 << std::endl;
    }

    return 0;
}

int main() {
    int n = 10; 

    for (int i = 0; i < n; i++) { 
        std::cout << "Iteración " << i + 1 << std::endl;
        for (int k = 0; k < n; k++) { 
            std::cout << "Iteración Anidada" << i + 1 << std::endl;
        }
    }

    return 0;
}

int main() {
    int n = 10; 

    for (int i = 0; i < n; i++) { 
        std::cout << "Iteración " << i + 1 << std::endl;
        for (int k = 0; k < n; k++) { 
            std::cout << "Iteración Anidada" << i + 1 << std::endl;
        }
    }
    for (int k = 0; k < n; k++) { 
            std::cout << "Iteración Afuera" << i + 1 << std::endl;
    }

    return 0;
}

int addItems(int n){
    return n+n;
}

int addItems(int n){
    return n+n+n;
}

