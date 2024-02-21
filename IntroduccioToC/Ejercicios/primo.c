#include <stdio.h>

int main() {
    int num, i, es_primo = 1;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("El numero no es primo.\n");
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            es_primo = 0;
            break;
        }
    }

    if (es_primo == 1) {
        printf("El numero es primo.\n");
    } else {
        printf("El numero no es primo.\n");
    }

    return 0;
}
