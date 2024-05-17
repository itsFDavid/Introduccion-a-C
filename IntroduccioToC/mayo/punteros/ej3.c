#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0;
    puts("Ingresa el tamaño del arreglo");
    scanf("%d", &x);

    char *arreglo = (char *)malloc((x + 1) * sizeof(char));
    if (arreglo == NULL) {
        puts("No se pudo asignar memoria para el arreglo");
        return 1;
    }


    getchar();
    char *p_a= arreglo;
    puts("Ingresa la palabra");
    for (int i = 0; i < x; i++) {
        scanf("%c", p_a++);
    } 
    
    p_a--;
    puts("Valores del arreglo en orden inverso:");
    for (int i = x - 1; i >= 0; i--) {
        printf("arreglo[%d]: %c\n", i, *p_a--);
    }

    free(arreglo);
    return 0;
}
