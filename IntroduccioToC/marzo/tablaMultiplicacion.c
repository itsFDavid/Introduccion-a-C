#include <stdio.h>

int main() {
    int numero, tabla[10];
    printf("Introduce un número para la tabla de multiplicar: ");
    scanf("%d", &numero);
    
    for (int i = 0; i < 10; i++) {
        tabla[i] = numero * (i + 1);
    }
    
    printf("Tabla de multiplicar de %d:\n", numero);
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", numero, i + 1, tabla[i]);
    }
    
    return 0;
}
