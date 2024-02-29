#include <stdio.h>

int main(){

    int numero= 1;

    while(numero <= 999){
        float divisibles3= numero % 3;
        float divisible2= numero %2;
        float divisible7= numero %7;
        //if(divisibles3== 0){
        //    printf("%d ,", numero);
        //}
        //if (divisible2==0 && divisible7==0){
        //    printf(" %d,", numero);
        //}
        if(numero<100 && numero %7){
            printf(" %d,", numero);
        }
        
        numero++;
    }
    

    return 0;
}