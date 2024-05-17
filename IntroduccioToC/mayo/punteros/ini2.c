#include <stdio.h>
#include <stdlib.h>

int i[10], x;
float f[10];

int main(){
    printf("\t\tEntero\t\t\tFlotante\n\n");
    for(int x=0; x<10; x++){
        printf("Elemento %d:\t%p\t\t%p\n", x, &i[x], &f[x]);
    }



    return 0;
}