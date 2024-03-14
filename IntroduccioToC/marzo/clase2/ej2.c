#include <stdio.h>


int main(){
    int size=0;
    printf("Ingresa el tamaño de elementos del arreglo: \n");
    scanf("%d", &size);
    float A[size];
    if(size==0){
        puts("El tamaño es 0, imposible hacer algo\n");
    }else{
        float n=0;
        float sum= 0;
        float mul=1;
        printf("Ingrese los %d elementos separados por espacios: \n", size);
        for (int i = 0; i < size; i++) {
            scanf("%f", &A[i]);
            sum+= A[i];
            mul*=A[i];
        }
        printf("El promedio de todos los elementos es: %.3f\n", sum/size);
        printf("La multiplicacion de todos los elementos es: %.3f\n", mul);
    }


    return 0;
}