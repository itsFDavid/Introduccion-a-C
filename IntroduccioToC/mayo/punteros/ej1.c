#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    clock_t inicio, fin;
    double cpu_tiempo_usado;
    inicio = clock();
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);


    int *arr = (int *)malloc((n+1) * sizeof(int));
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

    fin = clock();

    free(arr);
    cpu_tiempo_usado = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f milisegundos\n", cpu_tiempo_usado);
    return 0;
}