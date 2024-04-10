#include <stdio.h>

int main(){
    int n=0, m=0;
    puts("Introduce un numero hasta donde se hara la tabla de multiplicar en N: ");
    scanf("%d", &n);
    puts("Introduce un numero hasta donde se hara la tabla de multiplicar en M: ");
    scanf("%d", &m);

    for(int i=1; i<=m; i++){
        printf("\t%d", i);
    }
    printf("\n");

    for(int i=1; i<=n; i++){
        printf("%d\t", i);
        for(int j=1; j<=m; j++){
            printf("%d\t", i*j);
        }
        printf("\n");
    }


    return 0;
}