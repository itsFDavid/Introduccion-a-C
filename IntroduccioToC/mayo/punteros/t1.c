#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    clock_t inicio, fin;
    double cpu_tiempo_usado;
    inicio = clock();
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
        arr[i]=10+i;
    }

    printf("Los elementos del arreglo son: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);


    fin = clock();

    cpu_tiempo_usado = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f milisegundos\n", cpu_tiempo_usado);
    printf("Los ciclos de reloj por segundo son: %ld\n", CLOCKS_PER_SEC);

    return 0;
}