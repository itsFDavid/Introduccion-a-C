#include <stdio.h>

int main(){
    int w=10, x=20, y=30, r1, r2, r3;
    int *p1, *p2, *p3, *p4;
    p1=&w;
    p2=&x; //aqui se guardan las posiciones en memoria de los datos referenciados
    p3=&y;
    p4=p1;// ==> guarda el valor al que apunta p1=10;

    r1= *p1 + *p2;
    r2= *p3 + *p2;
    r3= *p4 * *p2;

    printf("r1: %d\n", r1);
    printf("r2: %d\n", r2);
    printf("r3: %d\n", r3);
    


    //si se quisiera cambiar p4, cambia p1 y w, ya que p1 apunta a w que es 10
    //Digamos que es asi *p4=*p1=&w; y w=10;
    printf("Valor de w antes de proceso: %d\n", w);
    *p4=20; //tenemos que apuntar a su valor
            //si solo se pone p4=20; es incorrecto ya que p4 es la posicion de memoria
    printf("Valor de w despues de proceso: %d\n", w);

    return 0;
}