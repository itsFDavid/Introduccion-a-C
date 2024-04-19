#include <stdio.h>
#include <string.h>

int main(){
    int len=0;
    char origen[]= "brisas";
    char destino[11]= "para";
    strcat(destino, origen);
    printf("Destino: %s\n", destino);



    return 0;
}