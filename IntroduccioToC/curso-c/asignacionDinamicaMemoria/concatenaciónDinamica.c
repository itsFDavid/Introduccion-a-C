#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenar(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char* resultado = malloc(len1 + len2 + 1); // +1 para el caracter nulo al final
    if (resultado == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        exit(1);
    }
    strcpy(resultado, str1);
    strcat(resultado, str2);
    return resultado;
}

int main() {
    const char* str1 = "Hola, ";
    const char* str2 = "mundo!";
    char* resultado = concatenar(str1, str2);
    printf("Cadena concatenada: %s\n", resultado);
    free(resultado);
    return 0;
}
