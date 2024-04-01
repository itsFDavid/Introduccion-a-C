#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Para la función toupper

char* convertirAMayusculas(const char* str) {
    int len = strlen(str);
    char* resultado = malloc(len + 1); // +1 para el caracter nulo al final
    if (resultado == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        exit(1);
    }
    for (int i = 0; i < len; i++) {
        resultado[i] = toupper(str[i]);
    }
    resultado[len] = '\0';
    return resultado;
}

int main() {
    const char* original = "Hola, mundo!";
    char* mayusculas = convertirAMayusculas(original);
    printf("Cadena en mayúsculas: %s\n", mayusculas);
    free(mayusculas);
    return 0;
}
