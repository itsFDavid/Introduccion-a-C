#include <stdio.h>
#include <stdlib.h>

int main() {
    int *sourceArray, *destinationArray;
    int size;

    printf("Ingrese el tamaño del array: ");
    scanf("%d", &size);

    sourceArray = (int*)malloc(size * sizeof(int));
    if (sourceArray == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return 1;
    }

    printf("Ingrese los elementos del array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &sourceArray[i]);
    }

    destinationArray = (int*)malloc(size * sizeof(int));
    if (destinationArray == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        free(sourceArray);
        return 1;
    }

    for (int i = 0; i < size; i++) {
        destinationArray[i] = sourceArray[i];
    }

    printf("Array copiado:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }
    printf("\n");

    free(sourceArray);
    free(destinationArray);
    return 0;
}
