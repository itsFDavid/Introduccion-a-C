#include <stdio.h>
#include <string.h>

//strcpy(<cadena_origen> en <cadena_destino>);
int main(){
    int len=0;
    char origen[]= "Origen";
    len= strlen(origen);
    char destino[len];
    strcpy(destino, origen);
    printf("Destino es igual a: %s\n", destino);

    return 0;
}