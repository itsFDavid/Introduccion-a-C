#include <stdio.h>
#include <string.h>
#include <math.h>

float area(float l1, float l2, float l3);

int main(){
    float l1, l2, l3;
    puts("Ingrese tres lados de un triangulo separado por un espacio: ");
    scanf("%f %f %f", &l1, &l2, &l3);
    printf("El area del triangulo es: %.2f\n", area(l1, l2, l3));

    return 0;
}



float area(float l1, float l2, float l3){
    float p= (l1+l2+l3)/2;
    return sqrt(p*(p-l1)*(p-l2)*(p-l3));
}