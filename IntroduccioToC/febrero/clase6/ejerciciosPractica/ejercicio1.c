#include <stdio.h>

void numeroMultiplo(int numero, int numero2, int rango, int lista[], 
                  int *contador) {
    int n = 1;
    *contador = 0; 

    while (n <= rango) {
        if (n % numero == 0 && n% numero2) {
            lista[*contador] = n;
            (*contador)++;
        }
        n++;
    }
}



int main(){
    int numero, numero2, numero3;
    int rango=0, contador=0;
    int lista[1000];
    printf("Ingresa un numero entero para obtener los multiplos: ");
    scanf("%d", &numero);
    printf("Ingresa un numero entero para omitir los multiplos de este: ");
    scanf("%d", &numero2);
    printf("Ingresa un numero para obtener el cuadrado y cubo de el: ");
    scanf("%d", &numero3);
    puts("Ingresa el rango de numero hasta donde se actuara el proceso");
    scanf("%d", &rango);

    if(numero2==numero){
        puts("El numero 1 y 2 son el mismo\n");
        return 0;
    }
    if (rango==0){
        puts("El rango no es aceptable\n");
        return 0;
    }
    numeroMultiplo(numero, numero2, rango, lista, &contador);

    printf("Los resultados son: \n");

    for (int i = 0; i < contador; i++) {
        printf("%d, ", lista[i]);
        if(lista[i]==numero3){
            printf("%d %d, ", lista[i]*lista[i], lista[i]*lista[i]*lista[i]);
        }
    }
    
    
    
    return 0;
}