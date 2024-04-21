#include <stdio.h>
#include <string.h>

int main(){
    char palabra[50];
    int ocurrencias=1, len=0;
    puts("Ingresa una palabra en minusculas: ");
    scanf("%s", palabra);
    len= strlen(palabra);
    printf("\n\nLa palabra es: %s\n", palabra);
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(palabra[i]==palabra[j]){
                ocurrencias+=1;
            }
        }
        printf("La letra '%c' tiene '%d' ocurrencias en su continuacion\n", palabra[i], ocurrencias);
        ocurrencias=1;
    }


    return 0;
}