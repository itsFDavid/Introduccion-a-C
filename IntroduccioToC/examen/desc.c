#include <stdio.h>

int main(){
    int cantidad=0;
    int cliente, z;

    puts("Ingresa cantidad de pesos");
    scanf("%d", &cantidad);
    int descuentoCliente, descuento;
    puts("Ingrese 1 si es cliente, 0 si no lo es");
    scanf("%d", &cliente);
    
    descuentoCliente=20;
    descuento=5;
    descuentoCliente=20;
    z=cliente? descuentoCliente: descuento;
    printf("Tu descuento es de %d porciento\n", z);
    printf("El total es de: %d\n", cantidad-((cantidad*z)/100));

    return 0;
}