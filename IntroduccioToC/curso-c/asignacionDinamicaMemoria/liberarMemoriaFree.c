#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char nombre[30], *p_nombre;
    int longitud;

    strcpy(nombre ,"Francisco"); 
    longitud=strlen(nombre);
    p_nombre= malloc((longitud+1)*sizeof(char));
    strcpy(p_nombre, nombre);
    printf("Nombre: %s\n", p_nombre);
    free(p_nombre);
    printf("Nombre: %s\n", p_nombre);
    
    
    

    return 0; 
}