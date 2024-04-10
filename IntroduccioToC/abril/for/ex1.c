#include <stdio.h>


int main(){
    int num=0, sum;
    puts("Ingresa un numero: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        sum+=i;
        if(i>1){
            printf(" + %d ", i);
        }else{
            printf("\n%d", i);
        }
    }
    printf("\nLa suma de los numeros es: %d\n", sum);


    int a=3;
    puts("\nA\tA+2\tA+4\tA+6");
    int i;


    for(i=1;i<=4; i++){
        printf("%d", a);
        printf("\t%d", a+2);
        printf("\t%d", a+4);
        printf("\t%d", a+6);
        a+=3;
        printf("\n");
    }
    i=1;
    return 0;
}