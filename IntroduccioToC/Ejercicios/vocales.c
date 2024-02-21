#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int vocales = 0, i;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (i = 0; cadena[i] != '\0'; i++) {
        if (tolower(cadena[i]) == 'a' || tolower(cadena[i]) == 'e' || tolower(cadena[i]) == 'i' ||
            tolower(cadena[i]) == 'o' || tolower(cadena[i]) == 'u') {
            vocales++;
        }
    }
    printf("El numero de vocales en la cadena es: %d\n", vocales);

    return 0;
}
