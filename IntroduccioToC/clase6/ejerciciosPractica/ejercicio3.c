#include <stdio.h>
#define MAX_NUM 100

int main() {
    int num;

    printf("Ingrese un numero entre 1 y %d: ", MAX_NUM);
    scanf("%d", &num);

    if (num < 1 || num > MAX_NUM) {
        printf("El numero ingresado no es valido.\n");
        return 1;
    }

    printf("Los numeros pares entre 1 y %d son:\n", num);

    int i = 1;
    while (i <= num) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");

    printf("Los numeros pares entre 1 y %d son:\n", num);
    for (int j = 1; j <= num; j++) {
        if (j % 2 == 0) {
            printf("%d ", j);
        }
    }
    printf("\n");

    return 0;
}
