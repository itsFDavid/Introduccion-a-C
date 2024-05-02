#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Punto;

int main() {
    // Reservar memoria dinámica para la estructura
    Punto *p = (Punto *)malloc(sizeof(Punto));
    if (p == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }

    printf("Ingrese las coordenadas del punto y:\n");
    scanf("%d", &p->y);
    printf("Ingrese las coordenadas del punto x:\n");
    scanf("%d", &p->x);

    printf("Coordenadas del punto: (%d, %d)\n", p->x, p->y);

    printf("Ingrese las nuevas coordenadas del punto y:\n");
    scanf("%d", &p->y);
    printf("Ingrese las nuevas coordenadas del punto x:\n");
    scanf("%d", &p->x);

    printf("Coordenadas del punto: (%d, %d)\n", p->x, p->y);

    // Liberar la memoria asignada a la estructura
    free(p);

    return 0;
}
