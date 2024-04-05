#include <stdio.h>
#define PI 3.1416

float areaCirculo(int radio){
    float area=(PI*(radio*radio));
    return area;
}



int main(){
    float r1,r2,r3;
    puts("Ingresa los radios de los 3 circulos separadas por espacios");
    scanf("%f %f %f", &r1, &r2, &r3);

    printf("EL area del circulo es: %f\n", areaCirculo(r1));
    printf("EL area del circulo es: %f\n", areaCirculo(r2));
    printf("EL area del circulo es: %f\n", areaCirculo(r3));

    return 0;
}