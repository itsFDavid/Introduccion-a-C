#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    time_t inicio, fin;
    inicio= clock();
    int i, n;
    char *buffer;

    printf("Teclea la longitud de la cadena\n");
    scanf("%d", &i);

    buffer= (char *) malloc((i+1)*sizeof(char));
    if(buffer == NULL) {
        printf("Error en la asignacion de memoria\n");
        exit(1);
    }
    for(n=0; n<i; n++){
        buffer[n]= rand()%26+'a';
        buffer[i]='\0';
    }

    printf("Random string: %s\n", buffer);
    free(buffer);
    fin= clock();
    printf("Tiempo de ejecucion: %f milisegundos\n", (double)(fin-inicio)/CLOCKS_PER_SEC);
    return 0;
}