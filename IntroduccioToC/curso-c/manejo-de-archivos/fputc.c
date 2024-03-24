#include <stdio.h>

char direccion[]= "/home/francisco/Escritorio/Semestre4/Metodos_Numericos/Introduccion-a-C/IntroduccioToC/curso-c/output/manejo-de-archivos/pruebaFputc.txt";

int main(){

    //Creamos el apuntador y lo asignamos a lo que devuelva fopen();
    //Recuerda que el archivo no existe y se creeara automaticamente.
    FILE *file= fopen(direccion, "a");

    if(file == NULL){
        puts("Error al intentar Acceder/Crear al archivo.");
    }else{
        //Definimos la variable y lo pedimos que ingrese por medio de fputc()
        char texto;
        printf("Se creo/encontro el archivo\n");
        //mientras el usuario no presione enter
        while((texto = getchar()) != '\n'){
            fputc(texto, file);
        }
        printf("Archivo escrito con exito\n");
    }
    //Pase lo que pase hay que cerrar el archivo
    fclose(file);

    return 0;
}