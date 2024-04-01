#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* invertir(const char* str) {
    int len = strlen(str);
    char* resultado = malloc(len + 1); // +1 para el caracter nulo al final
    if (resultado == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        exit(1);
    }
    for (int i = 0; i < len; i++) {
        resultado[i] = str[len - i - 1];
    }
    resultado[len] = '\0';
    return resultado;
}

int main() {
    const char* original = "hola";
    char* invertida = invertir(original);
    printf("Cadena original: %s\n", original);
    printf("Cadena invertida: %s\n", invertida);
    free(invertida);
    return 0;
}
