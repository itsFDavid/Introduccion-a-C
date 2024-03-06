#include <stdio.h>

#define MAX_NUM 100

int main() {
    int num;
    int suma_pares = 0;
    int suma_impares = 0;

    printf("Ingrese un numero entre 1 y %d: ", MAX_NUM);
    scanf("%d", &num);

    if (num < 1 || num > MAX_NUM) {
        printf("El numero ingresado no es valido.\n");
        return 1;
    }

    int i = 1;
    while (i <= num) {
        if (i % 2 == 0) {
            suma_pares += i;
        } else {
            suma_impares += i;
        }
        i++;
    }

    printf("La suma de los numeros pares entre 1 y %d es: %d\n", num, suma_pares);
    printf("La suma de los numeros impares entre 1 y %d es: %d\n", num, suma_impares);

    return 0;
}
