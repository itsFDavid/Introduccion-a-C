#include <stdio.h>
#include <string.h>

int main(){
    char cad[50];
    int len=0;
    puts("Ingresa una palabra");
    scanf("%s", cad);
    len= strlen(cad);
    printf("\nLa longitud de la cadena '%s' es: %d", cad, len);
    printf("\n\n");
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