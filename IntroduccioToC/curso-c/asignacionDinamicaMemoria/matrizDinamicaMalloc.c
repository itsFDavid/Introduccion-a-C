#include <stdio.h>
#include <stdlib.h>

int main() {
    int filas, columnas, i, j;
    int **matriz;

    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);

    // Asignar memoria para las filas
    matriz = (int **)malloc(filas * sizeof(int *));
    if (matriz == NULL) {
        printf("Error al asignar memoria para las filas de la matriz.\n");
        return 1;
    }

    // Asignar memoria para las columnas de cada fila
    for (i = 0; i < filas; i++) {
        matriz[i] = (int *)malloc(columnas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Error al asignar memoria para las columnas de la matriz.\n");
            return 1;
        }
    }

    // Leer los elementos de la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir la matriz
    printf("Matriz ingresada:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar la memoria asignada para las columnas
    for (i = 0; i < filas; i++) {
        free(matriz[i]);
    }

    // Liberar la memoria asignada para las filas
    free(matriz);

    return 0;
}
