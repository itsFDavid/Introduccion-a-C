#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nombre[100], *p_nombre;
    int longitud;

    printf("Ingrese su nombre: ");
    fgets(nombre, 100, stdin);
    nombre[strcspn(nombre, "\n")] = '\0'; // Eliminar el salto de línea al final de la cadena

    longitud = strlen(nombre);
    p_nombre = malloc((longitud + 1) * sizeof(char));

    if (p_nombre == NULL) {
        printf("Error al asignar memoria dinámica.\n");
        return 1;
    }

    strcpy(p_nombre, nombre);
    printf("Nombre copiado: %s\n", p_nombre);
    free(p_nombre);

    return 0;
}
