#include <stdio.h>

int main(){
    int numero=0;

    puts("Introduce un numero: ");
    scanf("%d", &numero);

    printf("\n");
    for(int i=0; i<numero; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("                  ");
        for(int j=(numero-i); j>0; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}