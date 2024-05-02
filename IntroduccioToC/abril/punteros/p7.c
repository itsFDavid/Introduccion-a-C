#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    // Reservar memoria dinámica para el arreglo
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }

    // Leer los elementos del arreglo
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calcular la suma de los elementos
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }

    printf("La suma de los elementos del arreglo es: %d\n", suma);

    // Liberar la memoria asignada al arreglo
    free(arr);

    return 0;
}
