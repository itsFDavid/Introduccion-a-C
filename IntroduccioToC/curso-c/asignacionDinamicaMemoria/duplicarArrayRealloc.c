#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int size, newSize;

    printf("Ingrese el tamaño inicial del array: ");
    scanf("%d", &size);

    array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return 1;
    }

    printf("Ingrese los elementos del array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Ingrese el nuevo tamaño del array: ");
    scanf("%d", &newSize);

    array = (int*)realloc(array, newSize * sizeof(int));
    if (array == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return 1;
    }

    printf("Ingrese los nuevos elementos del array:\n");
    for (int i = size; i < newSize; i++) {
        scanf("%d", &array[i]);
    }

    printf("Array después de la realocación:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}
