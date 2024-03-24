#include <stdio.h>
#include <string.h>

//posiciones de memoria es lo que guarda un apuntador
int numero=3;


/*
    sintaxis para declarar apuntadores

    tipoDeDato *nombreApuntador;

*/ 
//simpre hay que indicarle a que hacer referencia con &
int *apuntadorNumero= &numero;

int main(){

    printf("%d", numero); // ==> Esto imprime el numero 3
    print("%p", &numero); /* ==> Imprime el valor de memoria donde esta la variable,
                           &numero se le pasa como referencia para que sepa que elemento es*/

    return 0;
}