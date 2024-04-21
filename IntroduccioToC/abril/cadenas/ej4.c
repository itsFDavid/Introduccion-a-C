#include <stdio.h>
#include <string.h>

int main(){
    char pal1[50], pal2[50];
    int res;
    puts("Ingresa la primer palabra: ");
    scanf("%s", pal1);
    puts("Ingresa la primer palabra: ");
    scanf("%s", pal2);
    res = strcmp(pal1, pal2);
    printf("%d\n", res);
    if(res==0)puts("Ambas palabras son iguales");
    if(res>0)printf("La palabra ´%s´ es mas grande que ´%s´\n", pal2, pal1);
    if(res<0)printf("La palabra ´%s´ es mas grande que ´%s´\n", pal1, pal2);

    return 0;
}

