#include <stdio.h>
#include <string.h>

int longitudCadena(char *cadena) {
    int longitud = 0;
    while (*cadena != '\0') {
        longitud++;
        cadena++;
    }
    return longitud;
}

int main() {
    char str[50];
    puts("Introduce una palabra: ");
    fgets(str, 50, stdin);
    strtok(str, "\n");


    printf("Longitud de la cadena: %d\n", longitudCadena(str));
    
    return 0;
}
