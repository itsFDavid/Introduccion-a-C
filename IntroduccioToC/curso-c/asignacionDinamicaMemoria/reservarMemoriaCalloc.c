#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char *c, palabra[50];
    printf("Escribe una palabra: \n");
    fgets(palabra, 50, stdin);

    c= calloc(sizeof(palabra)+1, sizeof(char));
    strcpy(c, palabra);
    printf("Palabra ingresada: %s\n", c);
    free(c);
    printf("Palabra ingresada: %s\n", c); 


    return 0; 
}