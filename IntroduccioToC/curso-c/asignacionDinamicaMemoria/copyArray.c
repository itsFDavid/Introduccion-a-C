#include <stdio.h>
#include <stdlib.h>

int* copiarArreglo(const int* arr, int n) {
    int* copia = malloc(n * sizeof(int));
    if (copia == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        copia[i] = arr[i];
    }
    return copia;
}

void imprimirArreglo(const int* arr, int n) {
    printf("Arreglo: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* copia = copiarArreglo(arr, n);
    imprimirArreglo(copia, n);
    free(copia);
    return 0;
}
