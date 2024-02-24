#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int esPalindromo(char *cadena) {
    int inicio = 0;
    int fin = strlen(cadena) - 1;

    while (inicio < fin) {
        while (!isalpha(cadena[inicio])) {
            inicio++;
        }
        while (!isalpha(cadena[fin])) {
            fin--;
        }

        if (tolower(cadena[inicio]) != tolower(cadena[fin])) {
            return 0; 
        }
        inicio++;
        fin--;
    }
    return 1; 
}

int main() {
    char cadena[MAX_LENGTH];

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }

    if (esPalindromo(cadena)) {
        printf("%s es un palindromo.\n", cadena);
    } else {
        printf("%s no es un palindromo.\n", cadena);
    }

    return 0;
}
