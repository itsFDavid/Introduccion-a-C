#include <stdio.h>
#include <string.h>

//strcpy(<cadena_origen> en <cadena_destino>);
int main(){
    int len=0;
    char pa1[50], pa2[50], tmp[50];
    puts("Introduce la palabra 1: ");
    scanf("%s", pa1);
    puts("Introduce la palabra 2: ");
    scanf("%s", pa2);
    //Se solicitaron las palabras y se imprimieron
    printf("\n\tAntes\n");
    printf("Palabra 1: %s", pa1);
    printf("     Palabra 2: %s\n", pa2);

    //strcpy(<cadena_origen> en <cadena_destino>);
    strcpy(tmp, pa1); //tmp = pa1
    stpcpy(pa1, pa2); //pa1 = pa2
    stpcpy(pa2, tmp); //pa2 = tmp

    //Se imprimen las palabras ya intercambiadas
    printf("\n\tDespues\n");
    printf("Palabra 1: %s", pa1);
    printf("     Palabra 2: %s\n\n", pa2);

    return 0;
}