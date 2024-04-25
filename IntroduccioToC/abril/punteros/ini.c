#include <stdio.h>
#include <string.h>


int main(){
    int a= 10;
    int *puntero;
    puntero = &a;
    printf("El valor de a es: %d\n", a);
    printf("La direccion de a es: %p\n", &a);
    printf("El valor de a atravez del puntero es: %d\n", *puntero);
    printf("La direccion de a atravez del puntero es: %p\n", puntero);

    return 0;
}