#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int size;
    double average = 0.0;

    printf("Ingrese el tamaño del array: ");
    scanf("%d", &size);

    array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return 1;
    }

    printf("Ingrese los elementos del array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
        average += array[i];
    }
    average /= size;

    printf("El promedio de los elementos del array es: %.2f\n", average);

    free(array);
    return 0;
}
