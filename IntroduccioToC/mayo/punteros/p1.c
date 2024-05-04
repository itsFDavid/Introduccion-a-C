#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int n,m, i, j;
    clock_t inicio, fin;
    double cpu_tiempo_usado;
    inicio = clock();
    puts("Ingrese el tamaño de la matriz: ");
    scanf("%d", &n);
    m=n;
    int *arr= (int *)malloc(n * m * sizeof(int));
    if (arr == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }
    puts("Ingrese los elementos de la matriz: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Ingrese el elemento de la posicion (%d,%d): ", i, j);
            scanf("%d", &arr[i*m+j]);
        }
    }
    puts("Los elementos de la matriz son: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", arr[i*m+j]);
        }
        puts("");
    }
    free(arr);
    fin = clock();
    cpu_tiempo_usado = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f milisegundos\n", cpu_tiempo_usado);
    return 0;
}