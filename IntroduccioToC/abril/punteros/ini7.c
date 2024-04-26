#include <stdio.h>

int main(){
    char cadena[10];
    printf("Un int ocupa %lu bytes\n", sizeof(int));
    printf("Un char ocupa %lu bytes\n", sizeof(char));
    printf("Un float ocupa %lu bytes\n", sizeof(float));
    printf("Un double ocupa %lu bytes\n", sizeof(double));
    printf("Un cadena ocupa %ld bytes\n", sizeof(cadena));
    
    return 0;
}