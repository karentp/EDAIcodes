#include <stdio.h>

// Función para calcular el promedio de los números en un arreglo
float calculateAverage(int arr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main()
{
    int numbers[] = {5, 10, 15, 20, 25};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calcula el tamaño del arreglo

    float avg = calculateAverage(numbers, size); // Calcula el promedio

    printf("Promedio: %f\n", avg); // Imprime el promedio

    return 0;
}

// SALIDA: Promedio: 15.000000

