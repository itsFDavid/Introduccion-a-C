#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Ingrese tres números: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("El máximo de los tres números es: %d\n", max);

    return 0;
}
