#include <stdio.h>
#include <stdlib.h>

int* eliminarDuplicados(int* arr, int n, int* nuevoTam) {
    int* sinDuplicados = malloc(n * sizeof(int));
    if (sinDuplicados == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        exit(1);
    }
    int index = 0;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < index; j++) {
            if (arr[i] == sinDuplicados[j]) {
                break;
            }
        }
        if (j == index) {
            sinDuplicados[index++] = arr[i];
        }
    }
    *nuevoTam = index;
    return sinDuplicados;
}

void imprimirArreglo(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr
