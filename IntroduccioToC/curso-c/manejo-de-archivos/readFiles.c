#include <stdio.h>


int main(){
    int c;
    char direccion[]= "/home/francisco/Escritorio/Semestre4/Metodos_Numericos/Introduccion-a-C/IntroduccioToC/curso-c/output/manejo-de-archivos/ejercicio1.txt";
    FILE *file= fopen(direccion, "rt");

    if(file == NULL){
        puts("Error al tratar de leer el archivo");
        return 1;
    }else{

        while((c=fgetc(file))!=EOF){
            if(c=='\n'){
                printf("\n");
            }else{
                putchar(c);
            }
        }
    }
    fclose(file);
    return 0;
}