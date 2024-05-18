#include <stdio.h>
#include <stdlib.h>

typedef struct Pilas{
    int tope;
    int elementos[100];
}Pila;

void push(Pila*, int);
int pop(Pila*);
int estaVacia(Pila);
int estaLlena(Pila);
int verTope(Pila);
void mostrarPila(Pila);
Pila crearPila();



Pila crearPila(){
    Pila pila;
    pila.tope = 0;
    return pila;
}



void push(Pila *pila, int elemento){
    if(estaLlena(*pila)==1){
        printf("La pila esta llena\n");
        return;
    }else{
        pila->elementos[pila->tope] = elemento;
        pila->tope++;
    }
}

int pop(Pila *pila){
    if(estaVacia(*pila)==1){
        printf("La pila esta vacia\n");
        return -1;
    }else{
        pila->tope--;
        return pila->elementos[pila->tope];
    }
}

int estaVacia(Pila pila){
    if(pila.tope == 0)
        return 1;
    return 0;
}

int estaLlena(Pila pila){
    if(pila.tope == 100)
        return 1;
    return 0;
}

int verTope(Pila pila){
    if(estaVacia(pila)==1){
        printf("La pila esta vacia\n");
        return -1;
    }
    return pila.elementos[pila.tope-1];
}

void mostrarPila(Pila pila){
    if(estaVacia(pila)==1){
        printf("La pila esta vacia\n");
        return;
    }
    for(int i=0; i<pila.tope; i++){
        printf("%d ", pila.elementos[i]);
    }
    printf("\n");
}
