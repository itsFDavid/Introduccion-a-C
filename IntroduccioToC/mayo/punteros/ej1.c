#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);


    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }


    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Los elementos del arreglo son: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}