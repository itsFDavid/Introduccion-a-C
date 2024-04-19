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
    printf("\n\tAntes\n");
    printf("Palabra 1: %s", pa1);
    printf("     Palabra 2: %s\n", pa2);
    strcpy(tmp, pa1);
    stpcpy(pa1, pa2);
    stpcpy(pa2, tmp);
    printf("\n\tDespues\n");
    printf("Palabra 1: %s", pa1);
    printf("     Palabra 2: %s\n\n", pa2);

    return 0;
}