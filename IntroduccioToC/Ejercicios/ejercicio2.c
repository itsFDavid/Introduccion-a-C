#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 2
 Declarar 2 variables dobles (reales) y asignarles
valores diferentes de 0.
 Mostrar el resultado de dividir la primera entre la
segunda

Crea un programa que calcule el área de un círculo 
que tiene 10 metros de diámetro.

Área = πr2
*/
double calculcarAreaCirculo(double diametro){
    double area= 0;
    area= 3.1415926 * (diametro * diametro);

    return area;
}
int main(){
    double PI= 3.1415926;
    double unValor= 4.5678;
    double areaCirculo= calculcarAreaCirculo(10.0);

    printf("La division entre %f y %f es: %f\n", unValor, PI, unValor/PI);
    printf("El area de el circulo es %f\n", areaCirculo);
    return 0;
}
