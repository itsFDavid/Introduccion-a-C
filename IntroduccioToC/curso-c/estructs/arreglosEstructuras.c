#include <stdio.h>
#include <string.h>
#define MAX 5


struct persona{
    char nombre[50];
    int edad;
}personas[MAX];


int main(){
    for(int i=0; i<MAX; i++){
        printf("Ingrese nombre para persona [%d]: ", i);
        fgets(personas[i].nombre, sizeof(personas[i].nombre), stdin);
        strtok(personas[i].nombre, "\n");
        printf("Ingresa edad para persona [%d]: ", i);
        scanf("%d", &personas[i].edad);
        getchar();
    }
    for(int i=0; i<MAX; i++){
        printf("Nombre de persona [%d]: %s\n", i, personas[i].nombre);
        printf("Edad de persona [%d]: %d\n", i, personas[i].edad);
    }


    return 0;
}