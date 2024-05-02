#include <stdio.h>
#include <string.h>


int main(){
    char str[50];
    int longitud = 0;
    puts("Introduce una palabra: ");
    fgets(str, 50, stdin);
    strtok(str, "\n");

    longitud = strlen(str);

    printf("Longitud de la cadena: %d\n", longitud);
    //recurrencias de letras y quitar las que ya salieronsolo acumularlas
   int i, j, k, contador = 0;

    for(i = 0; i < longitud; i++){
        if(str[i] != ' '){
            contador++;
            for(j = i + 1; j < longitud; j++){
                if(str[i] == str[j]){
                    for(k = j; k < longitud; k++){
                        str[k] = str[k + 1];
                    }
                    longitud--;
                    j--;
                }
            }
        }
    }

    printf("Longitud de la cadena sin repetidos: %d\n", contador);
    printf("Cadena sin repetidos: %s\n", str);
    


    return 0;
}