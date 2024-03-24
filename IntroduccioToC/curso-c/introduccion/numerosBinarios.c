#include <stdio.h>

void convertirBinario(int n);

int main(){
    int numero=0;
    printf("Ingresa un numero\n");
    scanf("%f", &numero);
    puts("El numero en binario es: ");
    convertirBinario(numero);
    return 0;
}

void convertirBinario(int n){
    if(n>1) convertirBinario(n/2);// 4 ==> 2
    printf("%d", n%2); // ==> 2%2 ==>0

}
