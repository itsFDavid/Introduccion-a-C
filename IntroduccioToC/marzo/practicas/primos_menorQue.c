#include <stdio.h>

int main(){
    int number=0;
    printf("Ingresa un numero entero: \n");
    scanf("%d", &number);
    int i=0;
    while (i<=number)
    {
        if (i%i==0 && i%1==0)
        {
            printf("%d\t", i);
        }
        i++;
    }
    


    return 0;
}