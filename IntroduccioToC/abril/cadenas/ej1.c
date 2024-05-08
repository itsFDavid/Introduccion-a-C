#include <stdio.h>
#include <string.h>

int main(){
    char cad[50]; //se declara la cadena con el tamaño que se desee
    int len=0;
    puts("Ingresa una palabra");
    scanf("%s", cad); //se lee la cadena pero no se ocupa el & porque es un arreglo
    len= strlen(cad); //se obtiene la longitud de la cadena

    //Se imprime la longitud de la cadena
    printf("\nLa longitud de la cadena '%s' es: %d", cad, len);
    printf("\n\n");

    //Se imprime el tamaño de la cadena en forma de cuadrado
    for(int i=0; i<len; i++){
        printf("\t");
        for(int j=0; j<len; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}