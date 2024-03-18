#include <stdio.h>

int main() {
    int n;
    printf("Introduce el tamaño del arreglo: ");
    scanf("%d", &n);
    int arreglo[n];
    
    printf("Introduce %d elementos para el arreglo:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arreglo[i]);
    }
    
    int maximo = arreglo[0];
    int minimo = arreglo[0];
    
    for (int i = 1; i < n; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
        if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
    }
    
    printf("El máximo es: %d\n", maximo);
    printf("El mínimo es: %d\n", minimo);
    
    return 0;
}
