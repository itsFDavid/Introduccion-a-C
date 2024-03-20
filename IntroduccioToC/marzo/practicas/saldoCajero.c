#include <stdio.h>

float saldo = 1000.0; 
float limiteDiario = 500.0; 
float historialMontos=0;

void retirarDinero(float monto) {
    if(saldo == 0){
        puts("tu saldo se ha agotado");
    } else if (monto > saldo) {
        printf("Saldo insuficiente\n");
        printf("Tu saldo es: %f\n", saldo);
    } else if (monto > limiteDiario || historialMontos >= limiteDiario) {
        printf("Ha excedido el limite de retiro diario\n");
        printf("Su historial es: %f", historialMontos);
    } else {
        saldo -= monto;
        historialMontos += monto;
        printf("Retiro exitoso. Saldo restante: %.2f\n", saldo);
    }
}

int main() {
    float monto;
    while(saldo>=0){
        printf("Ingrese la cantidad a retirar: ");
        scanf("%f", &monto);
        retirarDinero(monto);
    }
    return 0;
}
