#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    int n;
    int m;
    int *arr;
} Matriz;


int main(){
    int n,m, i, j;
    clock_t inicio, fin;
    double cpu_tiempo_usado;
    inicio = clock();
    puts("Ingrese el tamaño de la matriz: ");
    scanf("%d", &n);
    m=n;
    Matriz matriz;
    matriz.n=n;
    matriz.m=m;
    matriz.arr= (int *)malloc(n * m * sizeof(int));
    if (matriz.arr == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }
    puts("Ingrese los elementos de la matriz: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Ingrese el elemento de la posicion (%d,%d): ", i, j);
            scanf("%d", &matriz.arr[i*m+j]);
        }
    }
    puts("Matriz: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matriz.arr[i*m+j]);
        }
        puts("");
    }
    free(matriz.arr);
    fin = clock();
    cpu_tiempo_usado = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f milisegundos\n", cpu_tiempo_usado);

    return 0;
}