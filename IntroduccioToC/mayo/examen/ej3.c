#include <stdio.h>
#include <string.h>

void imprimirArreglo(int len){
    int valorInt= sizeof(int);
    puts("Grafico del arreglo:");
    for(int i=0; i<len; i++){
        printf("*");
    }
    puts("");
    printf("Valor en bytes: %d\n", len);
}


int main(){
    int num=2;
    int *apuntador= &num;
    int opcion=0;
    int arreglo[*apuntador];
    int len=sizeof(arreglo);
    imprimirArreglo(len);
    printf("Desea incrementar el valor del apuntador en 1?: \n\tSi: 1, No: Cualquiera otro numero\n");
    scanf("%d", &opcion);
    if(opcion==1){
        *apuntador+=1;
        int arreglo[*apuntador];
        len=sizeof(arreglo);
        printf("%d\n", *apuntador);
        imprimirArreglo(len);
    }
    


    return 0;
}


