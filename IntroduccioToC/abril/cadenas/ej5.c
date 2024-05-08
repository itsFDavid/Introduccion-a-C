#include <stdio.h>
#include <string.h>

int main(){
    char palabra[50];
    char c, ca;
    int inicio, fin;
    puts("Ingresa una palabra toda en minusculas: ");
    scanf("%s", palabra);
    fin= strlen(palabra);
    printf("La longitud de la palabra '%s' es: %d\n", palabra, fin);
    c = palabra[0];
    ca = palabra[fin-1];
    printf("El primer caracter es: %c\nEl ultimo caracter es: %c\n", c, ca);
    if(c!=ca){
        printf("Tu palabra '%s' no es un palindromo\n", palabra);
        return 0;
    }else{
        fin-=2;
        for(inicio=1; inicio <fin; inicio++, fin--){
            c=palabra[inicio];
            ca= palabra[fin];
            if(c!=ca){
                printf("Tu palabra '%s' no es palindromo\n", palabra);
                printf("Los caracteres que no coinden son: \n--> [ %c ]\t!=\t[ %c ] <--\n", c, ca);
                return 0;
            }
        }
        printf("La palabra '%s' es un palindromo\n", palabra);
    }
    
    return 0;
}