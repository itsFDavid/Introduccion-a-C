#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("personas.txt", "w");

    int cantidad_personas;
    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &cantidad_personas);

    char nombre[50];
    int edad;
    fprintf(archivo, "---------------------------------\n");
    fprintf(archivo, "|    Nombre    |     Edad    |\n");
    fprintf(archivo, "---------------------------------\n");
    for (int i = 0; i < cantidad_personas; i++) {
        printf("Ingrese el nombre de la persona #%d: ", i + 1);
        scanf("%s", nombre);
        printf("Ingrese la edad de %s: ", nombre);
        scanf("%d", &edad);
        fprintf(archivo, "|   %-10s |     %-5d  |\n", nombre, edad);
    }
    fprintf(archivo, "---------------------------------\n");

    fclose(archivo);
    printf("Datos escritos en el archivo 'personas.txt'\n");

    return 0;
}
