#include <stdio.h>


float promedio(float a, float b);


int main(){
    float prom, a=5, b=10;
    prom= promedio(a, b);
    printf("EL promedio es: %.2f\n", prom);
    return 0;
}


float promedio(float a, float b){
    float prom=0;

    a=a+3;
    b=b+3;
    prom= (a+b)/2;
    return prom;
}