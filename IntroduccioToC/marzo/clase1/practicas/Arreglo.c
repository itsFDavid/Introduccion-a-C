#include <stdio.h>

int main() {
    int tamano;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamano);

    int arreglo[tamano];
    int i;

    printf("Ingrese %d elementos para el arreglo:\n", tamano);
    for (i = 0; i < tamano; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("Los elementos del arreglo son:\n");
    for (i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0;
}
