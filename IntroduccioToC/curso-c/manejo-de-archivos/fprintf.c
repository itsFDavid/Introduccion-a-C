#include <stdio.h>

/*

Un puntero a un archivo es un puntero a una informacion que define varias
cosas sobre el, incluyendo el nombre, el estado y la posicion actual del archivo.

En escencia identifica un archivo especifico y utiliza la secuencia asociada para dirigir 
el funcionamiento de las funciones de E/S con buffer.

Un puntero a un archivo es una varible de tipo puntero al tipo FILE que se define en <stdio.h>
Un porgrama necesita utilizar punteros a archivos para leer o escribir en los mismos.

Para obtener una variable de este tipo se utiliza una secuencia como este  FILE *file;

*/

char direccion[]= "/home/francisco/Escritorio/Semestre4/Metodos_Numericos/Introduccion-a-C/IntroduccioToC/curso-c/output/manejo-de-archivos/pruebaFprintf.txt";

int main(){

    //Creamos el apuntador y lo asignamos a lo que devuelva fopen();
    //Recuerda que el archivo no existe y se creeara automaticamente.
    FILE *file= fopen(direccion, "a");

    if(file == NULL){
        puts("Error al intentar Acceder/Crear al archivo.");
    }else{
        //Definimos texto y lo escribimos en el archivo
        char texto[]="Texto ingresado desde fprintf()";
        printf("Se creo/encontro el archivo\n");
        fprintf(file, "Archivo escrito: %s\n", texto);
        printf("Archivo escrito con exito");
    }
    //Pase lo que pase hay que cerrar el archivo
    fclose(file);

    return 0;
}