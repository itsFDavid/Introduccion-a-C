#include <stdio.h>

int main() {
    int filas, columnas;
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];
    int i, j;

    printf("Ingrese los elementos de la matriz:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("La matriz ingresada es:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("La suma de los elementos por fila es:\n");
    for (i = 0; i < filas; i++) {
        int suma_fila = 0;
        for (j = 0; j < columnas; j++) {
            suma_fila += matriz[i][j];
        }
        printf("Fila %d: %d\n", i, suma_fila);
    }

    printf("La suma de los elementos por columna es:\n");
    for (j = 0; j < columnas; j++) {
        int suma_columna = 0;
        for (i = 0; i < filas; i++) {
            suma_columna += matriz[i][j];
        }
        printf("Columna %d: %d\n", j, suma_columna);
    }

    return 0
