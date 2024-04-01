#include <stdio.h>
#include <stdlib.h>

float calcularPromedio(int* arr, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return (float)suma / n;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    float promedio = calcularPromedio(arr, n);
    printf("Promedio del arreglo: %.2f\n", promedio);
    return 0;
}
