#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char cadena[50];
    puts("Introduce una palabra: ");
    fgets(cadena, 50, stdin);
    strtok(cadena, "\n");


    char *cadena_original= &cadena[0];
    
    // Reservar memoria dinámica para la nueva cadena
    char *nueva_cadena = (char *)malloc(strlen(cadena) + 1);
    if (nueva_cadena == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }

    // Copiar la cadena original en la nueva cadena
    strcpy(nueva_cadena, cadena_original);
    
    printf("La nueva cadena es: %s\n", nueva_cadena);

    // Liberar la memoria asignada a la nueva cadena
    free(nueva_cadena);

    return 0;
}
