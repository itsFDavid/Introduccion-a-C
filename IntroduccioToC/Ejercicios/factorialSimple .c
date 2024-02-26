#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Ingrese un número: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    printf("El factorial de %d es %llu.\n", num, factorial);

    return 0;
}
