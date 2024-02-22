#include <stdio.h>
#include <stdbool.h>
int main(){

    if(true){
        printf("Todo este \ncodigo, se imprime dentro\ndel bloque if\n");
    }

    int numero= 34;
    if(numero %2 == 0){
        printf("El numero es par\n");
    }
    printf("Fin del programa\n");
    
    return 0;
}