#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TOPE 1000

int main(){
    double *p_array;
    p_array= malloc(TOPE *sizeof(double));

    if(p_array== NULL){
         printf("Error en la asignacion de memoria \n");
         return -1;
    }else{
        //srand(time(NULL)); 
        for(int i=0; i<TOPE; i++){
            p_array[i]= 1+rand() % ((TOPE+1)-1);
            printf("Num[%d]: %.2lf\n", i+1, p_array[i]); 
        }
    }
    return 0;
} 