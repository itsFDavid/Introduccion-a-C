#include <stdio.h>
#include <stdlib.h>

int* duplicarArreglo(int* arr, int n) {
    int* nuevoArr = malloc(n * sizeof(int));
    if (nuevoArr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        nuevoArr[i] = arr[i] * 2;
    }
    return nuevoArr;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* duplicado = duplicarArreglo(arr, n);
    printf("Arreglo original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nArreglo duplicado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", duplicado[i]);
    }
    printf("\n");
    free(duplicado);
    return 0;
}
