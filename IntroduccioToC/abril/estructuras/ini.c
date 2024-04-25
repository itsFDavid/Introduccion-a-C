#include <stdio.h>
#include <string.h>

struct CD{
    char titulo[100];
    char artista[50]; 
};


int main() {
    struct CD cd1;
    printf("Ingresa el titulo\n"); 
    fgets(cd1.titulo, 50, stdin);
    strtok(cd1.titulo, "\n");
    printf ("%s\n", cd1.titulo);

    return 0; 
}