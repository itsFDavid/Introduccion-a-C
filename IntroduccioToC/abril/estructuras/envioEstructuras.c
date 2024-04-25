#include <stdio.h>
#include <string.h>


struct FRACCION{
    int numerador;
    int denominador;
};
void multiply(struct FRACCION, struct FRACCION);

int main(){
    struct FRACCION fraccion;
    puts("Ingresa el numerador");
    scanf("%d", &fraccion.numerador);
    puts("Ingresa el denominador");
    scanf("%d", &fraccion.denominador);

    struct FRACCION fraccion2;
    puts("Ingresa el numerador");
    scanf("%d", &fraccion2.numerador);
    puts("Ingresa el denominador");
    scanf("%d", &fraccion2.denominador);
    multiply(fraccion, fraccion2);

    return 0;
}

void multiply(struct FRACCION mul1, struct FRACCION mul2){
    int den= mul1.denominador * mul2.denominador;
    int num= mul1.numerador * mul2.numerador;
    printf("La multiplicacion de las fracciones es: %d/%d\n", num, den);
}