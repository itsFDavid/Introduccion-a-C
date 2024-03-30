#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int size;
    // Usando long long para evitar desbordamiento
    long long product = 1; 

    printf("Ingrese el tamaño del array: ");
    scanf("%d", &size);

    array = (int*)calloc(size, sizeof(int));
    if (array == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        return 1;
    }

    printf("Ingrese los elementos del array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
        product *= array[i];
    }

    printf("El producto de los elementos del array es: %lld\n", product);

    free(array);
    return 0;
}
