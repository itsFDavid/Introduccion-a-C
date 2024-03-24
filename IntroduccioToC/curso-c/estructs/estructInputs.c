#include <stdio.h>
#include <string.h>

struct persona{
    char nombre[50];
    int edad;
}persona1,persona2;

int main(){
    
    printf("Ingresa nombre: ");
    fgets(persona1.nombre, sizeof(persona1.nombre), stdin);
    strtok(persona1.nombre, "\n");
    printf("Ingresa edad: ");
    scanf("%d", &persona1.edad);
    getchar(); //<== consume el caracter que se haya quedado y asi deja introducir el siguiente


    printf("Ingresa nombre: ");
    fgets(persona2.nombre, sizeof(persona2.nombre), stdin);
    strtok(persona2.nombre ,"\n");
    printf("Ingresa edad: ");
    scanf("%d", &persona2.edad);
    getchar();
    
    printf("El nombre es: %s\n", persona1.nombre);
    printf("Su edad es: %d\n", persona1.edad);

    printf("El nombre es: %s\n", persona2.nombre);
    printf("Su edad es: %d\n", persona2.edad);
    return 0;
}