#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[100];
    int edad;
} Persona;

int main() {
    Persona *persona;

    persona = malloc(sizeof(Persona));

    if (persona == NULL) {
        printf("Error al asignar memoria dinámica.\n");
        return 1;
    }

    printf("Ingrese su nombre: ");
    fgets(persona->nombre, 100, stdin);
    persona->nombre[strcspn(persona->nombre, "\n")] = '\0'; // Eliminar el salto de línea al final de la cadena

    printf("Ingrese su edad: ");
    scanf("%d", &persona->edad);

    printf("Nombre: %s\nEdad: %d\n", persona->nombre, persona->edad);
    free(persona);

    return 0;
}
