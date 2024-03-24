#include <stdio.h>

int main(){

    int descuento= 10;
    int descuentoCliente= 20;
    int cliente= 1; 
    int z= 0;
    int cantidad= 1300;
    z= (cliente) ? descuentoCliente : descuento; // solo aplica a booleanos
    printf("El descuento es de %d\n", z);
    printf("El total es: %d",cantidad-((z*cantidad)/100));
    return 0;
}
