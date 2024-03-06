#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min, max, cantidad, i;

    srand(time(0));

    printf("Ingresa el valor mínimo del rango: ");
    scanf("%d", &min);

    printf("Ingresa el valor máximo del rango: ");
    scanf("%d", &max);

    printf("Ingresa la cantidad de números aleatorios a generar: ");
    scanf("%d", &cantidad);

    if (min >= max) {
        printf("Error: El valor mínimo debe ser menor que el valor máximo.\n");
        return 1;
    }

    printf("Números aleatorios generados:\n");
    for (i = 0; i < cantidad; i++) {
        int num = rand() % (max - min + 1) + min;
        printf("%d ", num);
    }
    printf("\n");

    return 0;
}
