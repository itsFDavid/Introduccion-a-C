#include <stdio.h>

int main() {
    int numeros[] = {10, 5, 20, 8, 15}; 
    int tamano = sizeof(numeros) / sizeof(numeros[0]);
    int maximo = numeros[0]; 
    int minimo = numeros[0]; 
    for (int i = 1; i < tamano; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    printf("El maximo es: %d\n", maximo);
    printf("El minimo es: %d\n", minimo);

    return 0;
}
