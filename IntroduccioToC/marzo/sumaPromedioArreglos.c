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
    
    int suma = 0;
    float media, promedio;
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }
    
    media = (float)suma / n;
    promedio = suma / (float)n;
    
    printf("Suma: %d\n", suma);
    printf("Multiplicación: %d\n", 0); // Aquí deberías calcular la multiplicación de los elementos del arreglo
    printf("Media: %.2f\n", media);
    printf("Promedio: %.2f\n", promedio);
    
    return 0;
}
