#include <stdio.h>
#include <string.h>

int contarVocales(char *cadena) {
    int contador = 0;
    while (*cadena != '\0') {
        if (*cadena == 'a' || *cadena == 'e' || *cadena == 'i' || *cadena == 'o' || *cadena == 'u' ||
            *cadena == 'A' || *cadena == 'E' || *cadena == 'I' || *cadena == 'O' || *cadena == 'U') {
            contador++;
        }
        cadena++;
    }
    return contador;
}

int main() {
    char str[50];
    puts("Introduce una palabra: ");
    fgets(str, 50, stdin);
    strtok(str, "\n");
    printf("Número de vocales en la cadena: %d\n", contarVocales(str));
    
    return 0;
}
