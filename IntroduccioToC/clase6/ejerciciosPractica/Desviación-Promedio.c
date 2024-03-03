#include <stdio.h>
#include <math.h>

#define NUM_CALIFICACIONES 7

int main() {
    int i;
    float calificaciones[NUM_CALIFICACIONES];
    float suma = 0.0, promedio, desviacion = 0.0;

    printf("Ingresa las calificaciones de las 7 unidades:\n");
    for (i = 0; i < NUM_CALIFICACIONES; i++) {
        printf("Calificación %d: ", i + 1);
        scanf("%f", &calificaciones[i]);
        suma += calificaciones[i];
    }

    promedio = suma / NUM_CALIFICACIONES;

    for (i = 0; i < NUM_CALIFICACIONES; i++) {
        desvia
