#include <stdio.h>

int factorial(int a);


int main(){
    int x;

    puts("Ingresa un numero: ");
    scanf("%d", &x);

    printf("El factorial es: %d\n", factorial(x));
    return 0;
}

int factorial(int a){
    if(a<1)return 1;

    return a * factorial(a-1);
}