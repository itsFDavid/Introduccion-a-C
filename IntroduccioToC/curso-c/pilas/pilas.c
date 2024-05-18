#include "pilas.h"

int main(){
    Pila pila = crearPila();
    push(&pila, 1);
    push(&pila, 2);

    mostrarPila(pila);

    printf("Tope: %d\n", verTope(pila));

    int valor= pop(&pila);
    printf("Valor eliminado de la pila: %d\n", valor);

    mostrarPila(pila);

    printf("Tope: %d\n", verTope(pila));

    valor= pop(&pila);
    printf("Valor eliminado de la pila: %d\n", valor);
    mostrarPila(pila);

    printf("Tope: %d\n", verTope(pila));

    push(&pila, 3);
    push(&pila, 4);
    push(&pila, 5);
    push(&pila, 6);
    push(&pila, 7);
    push(&pila, 8);
    push(&pila, 9);
    push(&pila, 10);
    push(&pila, 11);
    push(&pila, 12);
    push(&pila, 13);
    push(&pila, 14);
    push(&pila, 15);
    push(&pila, 16);
    push(&pila, 17);
    push(&pila, 18);
    push(&pila, 19);
    push(&pila, 20);
    push(&pila, 21);
    push(&pila, 22);
    push(&pila, 23);
    push(&pila, 24);
    push(&pila, 25);
    push(&pila, 26);
    push(&pila, 27);
    push(&pila, 28);
    push(&pila, 29);
    push(&pila, 30);
    push(&pila, 31);
    push(&pila, 32);
    push(&pila, 33);
    push(&pila, 34);

    mostrarPila(pila);
    printf("Tope: %d\n", verTope(pila));
    


    return 0;
}