#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el tamaño de la matriz cuadrada: ");
    scanf("%d", &n);

    // Reservar memoria dinámica para la matriz
    int **matriz = (int **)malloc(n * sizeof(int *));
    if (matriz == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(n * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Error al asignar memoria.");
            return 1;
        }
    }

    // Leer los elementos de la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    //mostrar la matriz
    printf("Matriz ingresada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar la memoria asignada a la matriz
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
