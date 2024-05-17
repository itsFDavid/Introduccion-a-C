#include <stdio.h>
#include <stdlib.h>


int main(){
    int x=0;
    puts("Ingresa el tamaño del arreglo");
    scanf("%d", &x);
    int *arreglo= (int *) malloc((x+1)* sizeof(int));
    if(arreglo==NULL){
        puts("No se pudo asignar memoria para el arreglo");
        return 1;
    }
    int *p_arreglo= arreglo;
    for(int i=0; i<x; i++){
        printf("Ingresa valor del arreglo en la posicion %d\n", i);
        scanf("%d", p_arreglo++);
    }
    p_arreglo = arreglo;
    puts("");
    puts("Valores del arreglo: ");
    puts("");
    for(int i=0; i<x; i++){
        printf("arreglo[%d]: %d\n", i ,*p_arreglo++);
    }
    puts("");
    free(arreglo);

    return 0;
}