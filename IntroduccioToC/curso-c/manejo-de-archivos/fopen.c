#include <stdio.h>


/*

Utilizar fopen() para determinar si existe un archivo de texto (.txt) 
o no.

fopen(nombreArchivo, modo);

    nombreArchivo= cadena...Contiene el identificador externo del archivo
    modo= cadena...Contiene el modo en que va a ser tratado el archivo

    /home/francisco/Escritorio/Semestre4/Metodos_Numericos/Introduccion-a-C/IntroduccioToC/curso-c/output/manejo-de-archivos/pruebaFopen.txt
*/

int main(){
    
    FILE *file;
    
    char direccion[]= "/home/francisco/Escritorio/Semestre4/Metodos_Numericos/Introduccion-a-C/IntroduccioToC/curso-c/output/manejo-de-archivos/pruebaFopen.txt";
    
    file= fopen(direccion, "r");

    if(file == NULL){
        puts("El archivo no existe.");
    }else{
        printf("Se encontro el archivo\n");
        printf("Su ubicacion es: %s\n", direccion);
    }

    return 0;
}