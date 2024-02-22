#include <stdio.h>
#include <stdbool.h>

int main(){

    int calificacion= 0;
    puts("Ingresa tu calificacion: ");
    scanf("%d", &calificacion);
    if (calificacion>=8){
        puts("Felicidades aprobaste");
    }else{
        puts("Reprobaste");
        puts("Gracias por participar, llama mas tarde");
    }

}