#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *c, palabra[50];

    printf("Escribe una palabra: \n");
    fgets(palabra, 50, stdin);
    palabra[strcspn(palabra, "\n")] = '\0'; // Eliminar el salto de línea al final de la cadena

    c = calloc(strlen(palabra) + 1, sizeof(char));

    if (c == NULL) {
        printf("Error al asignar memoria dinámica.\n");
        return 1;
    }

    strcpy(c, palabra);
    printf("Palabra ingresada: %s\n", c);
    free(c);

    return 0;
}
