#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char cadena[MAX_LENGTH];

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }

    printf("La cadena invertida es: ");
    for (int i = strlen(cadena) - 1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }
    printf("\n");

    return 0;
}
