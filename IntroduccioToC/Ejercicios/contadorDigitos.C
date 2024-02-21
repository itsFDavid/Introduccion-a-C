#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }
    do {
        numero /= 10;
        contador++;
    } while (numero != 0);

    printf("El numero tiene %d digitos.\n", contador);

    return 0;
}
