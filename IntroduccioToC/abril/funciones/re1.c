#include <stdio.h>


int potencia(int a, int b);
int main(){
    int x, y, max;
    x=2;
    y=3;

    max= potencia(x,y);
    printf("La potencia es: %d\n", max);

    return 0;
}

int potencia(int a, int b){
    if(b<1) return 1;
    return a * potencia(a, b-1);
}