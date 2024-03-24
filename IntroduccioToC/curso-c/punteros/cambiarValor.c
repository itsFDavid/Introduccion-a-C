#include <stdio.h>

int main(){
    int a=20,b=30;
    int *pA,*pB;
    pA= &a;
    pB= &b;

    puts("Antes de cambiarlos con apuntadores");
    printf("a: %d\nb: %d\n", a, b);
    puts("Posiciones en memoria");
    printf("PointerA: %p\nPointerB: %p\n", pA, pB);
    *pA= 40;
    *pB= 10;
    puts("Despues de cambiarlos con apuntadores");
    printf("a: %d\nb: %d\n", a, b);
    puts("Posiciones en memoria");
    printf("PointerA: %p\nPointerB: %p\n", pA, pB);


    return 0;
}