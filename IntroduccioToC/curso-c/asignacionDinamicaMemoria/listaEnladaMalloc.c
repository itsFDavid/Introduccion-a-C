#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo *siguiente;
} Nodo;

Nodo* crearNodo(int dato) {
    Nodo *nuevo = malloc(sizeof(Nodo));
    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    return nuevo;
}

void liberarLista(Nodo *head) {
    Nodo *temp;
    while (head != NULL) {
        temp = head;
        head = head->siguiente;
        free(temp);
    }
}

int main() {
    Nodo *head = NULL, *temp;
    int dato;

    printf("Ingrese una secuencia de números (ingrese -1 para terminar):\n");
    while (1) {
        printf("Ingrese un número: ");
        scanf("%d", &dato);
        if (dato == -1)
            break;

        if (head == NULL) {
            head = crearNodo(dato);
            temp = head;
        } else {
            temp->siguiente = crearNodo(dato);
            temp = temp->siguiente;
        }
    }

    printf("Lista enlazada ingresada:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->dato);
        temp = temp->siguiente;
    }
    printf("\n");

    liberarLista(head);

    return 0;
}
