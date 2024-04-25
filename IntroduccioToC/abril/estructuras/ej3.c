#include <stdio.h>
#include <string.h>


struct FRACCION{
    int numerador;
    int denominador;
};
void multiply(struct FRACCION, struct FRACCION);
void minus(struct FRACCION, struct FRACCION);
void sum(struct FRACCION, struct FRACCION);
void divide(struct FRACCION, struct FRACCION);

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
    minus(fraccion, fraccion2);
    sum(fraccion, fraccion2);
    divide(fraccion, fraccion2);

    return 0;
}

void multiply(struct FRACCION mul1, struct FRACCION mul2){
    int den= mul1.denominador * mul2.denominador;
    int num= mul1.numerador * mul2.numerador;
    printf("La multiplicacion de las fracciones es: %d/%d, %.2f\n", num, den, (float)num/den);
}

void minus(struct FRACCION min1, struct FRACCION min2){
    int den= min1.denominador * min2.denominador;
    int num= (min1.numerador * min2.denominador) - (min2.numerador * min1.denominador);
    printf("La resta de las fracciones es: %d/%d, %.2f\n", num, den, (float)num/den);
}

void sum(struct FRACCION sum1, struct FRACCION sum2){
    int den= sum1.denominador * sum2.denominador;
    int num= (sum1.numerador * sum2.denominador) + (sum2.numerador * sum1.denominador);
    printf("La suma de las fracciones es: %d/%d, %.2f\n", num, den, (float)num/den);
}
void divide(struct FRACCION div1, struct FRACCION div2){
    int den= div1.denominador * div2.numerador;
    int num= div1.numerador * div2.denominador;
    printf("La division de las fracciones es: %d/%d, %.2f\n", num, den, (float)num/den);
}