#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palabra[50], *p_palabra;
    int longitud;


     printf("Ingresa una palabra: \n");
     fgets(palabra, 50, stdin);
     strtok(palabra, "\n");

     longitud= strlen(palabra);
     p_palabra= (char *) malloc(longitud*sizeof(char)); 

     strcpy(p_palabra, palabra);
     printf("Palabra: %s\n", p_palabra);
     printf("Palabra: %p\n", p_palabra);

     free(p_palabra);
     printf("Palabra: %s\n", p_palabra);
     printf("Palabra: %p\n", p_palabra);


    return 0;
}
