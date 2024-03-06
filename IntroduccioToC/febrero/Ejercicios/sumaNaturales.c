#include <stdio.h>

int main() {
    int num, i, suma = 0;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Por favor ingrese un numero entero positivo.\n");
        return 1;
    }

    for (i = 1; i <= num; i++) {
        suma += i;
    }

    printf("La suma de los primeros %d numeros naturales es: %d\n", num, suma);

    return 0;
}
