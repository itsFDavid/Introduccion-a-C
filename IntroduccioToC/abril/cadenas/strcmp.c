#include <stdio.h>
#include <string.h>

int main(){
    char cad1[]= "brisas";
    char cad2[]= "para";
    int res= strcmp(cad1, cad2);
    printf("El resultado es: %d\n", res);
    //Si cadena 2 es mayor que cadena 1, entonces res= - que significa que cadena 2 es mayor que cadena 1
    //Si son iguales el resultado de res= 0
    //si cadena 1 es mayor que 2 entonces res = + que significa que cadena 1 es mayor que cadena 2
    return 0;
}