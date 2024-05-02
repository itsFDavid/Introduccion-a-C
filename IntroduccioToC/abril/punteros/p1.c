#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, n;
    char *buffer;

    printf("Teclea la longitud de la cadena\n");
    scanf("%d", &i);

    buffer= (char *) malloc((i+1)*sizeof(char));
    if(buffer == NULL) exit(1);
    
    for(n=0; n<i; n++){
        buffer[n]= rand()%26+'a';
        buffer[i]='\0';
    }

    printf("Random string: %s\n", buffer);

    printf("Deseas cambiar el tamaño de la cadena? (1: Si, 0: No)\n");
    scanf("%d", &i);
    if(i==1){
        printf("Teclea la longitud de la cadena\n");
        scanf("%d", &i);
        buffer= (char *) realloc(buffer, (i+1)*sizeof(char));
        if(buffer == NULL) exit(1);
        printf("El nuevo tamaño de la cadena es: %d\n", i);
        for(n=0; n<i; n++){
            buffer[n]= rand()%26+'a';
            buffer[i]='\0';
        }
        printf("Random string: %s\n", buffer);
    }

    free(buffer);
    return 0;
}