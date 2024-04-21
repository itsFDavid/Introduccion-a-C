#include <stdio.h>
#include <string.h>

int main(){
    char pal1[50], pal2[50];
    int len=0;
    puts("Ingresa la pimer palabra: ");
    scanf("%s", pal1);
    puts("Ingresa la segunda palabra: ");
    scanf("%s", pal2);
    len = strlen(pal1);
    printf("Las veces que se imprimira %s es: %d\n", pal2, len);
    printf("%s", pal1);
    for(int i=0; i<len;i++){
        printf("%s", pal2);
    }
    printf("\n");


    return 0;
}