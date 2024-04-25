#include <stdio.h>
#include <string.h>

struct CD{
    char titulo[100];
    char artista[50]; 
    int num_caciones;
    int precio;
    int anio;
};


int main() {
    struct CD cd1;
    printf("Ingresa el titulo\n"); 
    fgets(cd1.titulo, 50, stdin);
    strtok(cd1.titulo, "\n");

    puts("Ingresa el artista");
    fgets(cd1.artista, 50, stdin);
    strtok(cd1.artista, "\n");

    fflush(stdin);
    puts("Ingresa el numero de canciones");
    scanf("%d", &cd1.num_caciones);

    puts("Ingresa el precio");
    scanf("%d", &cd1.precio);

    puts("Ingresa el anio");
    scanf("%d", &cd1.anio);

    printf("\nLa informacion del CD es: \n");
    printf("\t-----------------------------------------\n");
    printf("\t| Titulo\t| %s\n", cd1.titulo);
    printf("\t| Artista\t| %s\n", cd1.artista);
    printf("\t| Canciones\t| %d\n", cd1.num_caciones);
    printf("\t| Precio\t| %d\n", cd1.precio);
    printf("\t| Anio\t\t| %d\n", cd1.anio);
    printf("\t------------------------------------------\n");

    return 0; 
}