#include <stdio.h>
#include <stdlib.h>

int main() {
    int *puntero;
    int n;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

   
    puntero = (int *)malloc(n * sizeof(int));

    if (puntero == NULL) {
        printf("Error: No se pudo asignar memoria.");
        return 1;
    }

    
    printf("Ingrese %d enteros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &puntero[i]);
    }

    
    printf("Elementos ingresados:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", puntero[i]);
    }
    printf("\n");


    free(puntero);

    return 0;
}
