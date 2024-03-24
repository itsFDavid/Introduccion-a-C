#include <stdio.h>

int main(){
    int numero=10;
    int *pNumero;

    printf("El Dato de numero es: %d\n", numero);
    printf("El valor de memoria de numero es: %p\n", &numero);

    pNumero= &numero; // Puntero guarda la posicion de memoria de numero
    puts("Datos de la variable numero: ");
    printf("El Dato de numero es: %d\n", numero);
    printf("El Dato de numero es: %i\n", *pNumero);
    
    puts("La posicion de memoria de la variable numero es: ");
    printf("La posicion de memoria es: %p\n", &numero);
    printf("La posicion de memoria es: %p\n", pNumero);


    return 0;
}