#include <stdio.h>

int main(){
    float l1,l2,l3;
    puts("Ingresa el valor de lado 1");
    scanf("%f", &l1);
    puts("Ingresa el valor de lado 2");
    scanf("%f", &l2);
    puts("Ingresa el valor de lado mas grande");
    scanf("%f", &l3);

    float op1,op2;
    op1=l1*l1 +l2*l2;

    op2= l3*l3;
    if(op1==op2){
        puts("Es un triangulo rectangulo");
    }else{
        puts("No es un triangulo rectangulo");
    }


    return 0;
}