#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *p_nombre, *p_nombreCompleto;

    p_nombre= malloc(10*sizeof(char));

    strcpy(p_nombre, "Francisco");
    printf("Nombre: %s\n", p_nombre);
    //ampliando cadena de caracteres a 30 espacios
    p_nombreCompleto= realloc(p_nombre, 30*sizeof(char));
    strcat (p_nombreCompleto, " David Colin Lira");
    printf("Nombre completo: %s\n", p_nombreCompleto);

    return 0;
}