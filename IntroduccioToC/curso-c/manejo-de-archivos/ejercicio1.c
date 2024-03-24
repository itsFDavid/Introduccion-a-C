/*

Crea un programa que pueda seguir agregando contactos de email, hacia 
el archivo que cramos en el problema

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char direccion[]= "/home/francisco/Escritorio/Semestre4/Metodos_Numericos/Introduccion-a-C/IntroduccioToC/curso-c/output/manejo-de-archivos/ejercicio1.txt";

struct persona{
    char nombre[50];
    char apellido[50];
    char email[50];
}datos;
FILE *file;

int main(){
    char rpt;
    file= fopen(direccion, "at");
    // at ==> add text (Agregar texto).

    if(file == NULL){
        puts("Error al tratar de localizar el archivo\npuede ser por que la ruta no es la correcta o no existe");
        return 1;
    }else{
        
        puts("\tAgregando mas contacto de email: ");
        fflush(stdin); //consumimos el caracter de nueva linea para que no afecte abajo
        do
        {
            printf("\nNombre: ");
            fgets(datos.nombre, sizeof(datos.nombre), stdin);
            strtok(datos.nombre, "\n");
            printf("\nApellidos: ");
            fgets(datos.apellido, sizeof(datos.apellido), stdin);
            strtok(datos.apellido, "\n");
            printf("\nEmail: ");
            fgets(datos.email, sizeof(datos.email), stdin);
            strtok(datos.email, "\n");

            fprintf(file, "\nNombre: ");
            fwrite(datos.nombre, 1, strlen(datos.nombre), file);
            fprintf(file, "\nApellidos: ");
            fwrite(datos.apellido, 1, strlen(datos.apellido), file);
            fprintf(file, "\nEmail: ");
            fwrite(datos.email, 1, strlen(datos.email), file);
            printf("Desea seguir agregando mas contactos (s): ");
            scanf(" %c", &rpt); //Se agrega un espacio en blanco para evitar problemas de buffer
            getchar();//Cosumimos el caracter de nueva linea en el buffer de entrada
        } while (rpt=='s');    
    }        
    fclose(file);


    return 0;
}
