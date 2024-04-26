#include <stdio.h>


void cambio(int *a, int *b);

int main(){

    int x=2, y=5;

    printf("Antes x: %d, y: %d\n", x, y);
    cambio(&x, &y);
    printf("Despues x: %d, y: %d\n", x, y);
    return 0;
}


void cambio(int *a, int *b){
    int temp;
    temp= *b;
    *b= *a;
    *a= temp;
}