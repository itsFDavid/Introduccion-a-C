#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    clock_t inicio, fin;
    double cpu_tiempo_usado;
    inicio = clock();
    system("code .");
    fin = clock();

    cpu_tiempo_usado = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f milisegundos\n", cpu_tiempo_usado);
    printf("Los ciclos de reloj por segundo son: %ld\n", CLOCKS_PER_SEC);

    return 0;
}