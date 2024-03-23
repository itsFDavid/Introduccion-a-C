#include <stdio.h>

struct persona{
    char nombre[50];
    int edad;
}

persona1={"Francisco", 19},
persona2={"Jose", 20};

int main(){
    
    printf("El nombre es: %s\n", persona1.nombre);
    printf("Su edad es: %d\n", persona1.edad);

    printf("El nombre es: %s\n", persona2.nombre);
    printf("Su edad es: %d\n", persona2.edad);
    return 0;
}