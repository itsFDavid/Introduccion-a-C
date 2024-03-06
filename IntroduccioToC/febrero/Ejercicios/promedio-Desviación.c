#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_NUMEROS 100

int main() {
    int numeros[MAX_NUMEROS];
    int n, suma = 0;
    float promedio, desviacion = 0.0;

    printf("Ingrese la cantidad de números: ");
    scanf("%d", &n);

    printf("Ingrese los %d números:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
        suma += numeros[i];
    }

    promedio = (float)suma / n;

    for (int i = 0; i < n; i++) {
        desviacion += pow(numeros[i] - promedio, 2);
    }
    desviacion = sqrt(desviacion / n);

    printf("Promedio: %.2f\n", promedio);
    printf("Desviación estándar: %.2f\n", desviacion);

    return 0;
}
