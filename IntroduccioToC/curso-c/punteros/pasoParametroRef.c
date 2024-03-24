#include <stdio.h>

void agregarValor(int *valor){
    *valor+=10;
}

int main(){
    int valor=5;
    printf("Valor antes de la funcion: %d\n", valor);
    agregarValor(&valor); //este modifica el valor por que le indico en que posicion esta el valor
    printf("Valor despues de la funcion: %d\n", valor);




    return 0;
}