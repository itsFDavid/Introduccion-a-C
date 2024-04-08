#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("calificaciones.txt", "w");

    int cantidad_calificaciones;
    printf("Ingrese la cantidad de calificaciones: ");
    scanf("%d", &cantidad_calificaciones);

    float suma = 0, calificacion;
    fprintf(archivo, "---------------------------------\n");
    fprintf(archivo, "| Calificacion |    Descripcion   |\n");
    fprintf(archivo, "---------------------------------\n");
    for (int i = 0; i < cantidad_calificaciones; i++) {
        printf("Ingrese la calificacion #%d: ", i + 1);
        scanf("%f", &calificacion);
        fprintf(archivo, "|     %.2f     |   Calificacion %d  |\n", calificacion, i + 1);
        suma += calificacion;
    }
    fprintf(archivo, "---------------------------------\n");
    float promedio = suma / cantidad_calificaciones;
    fprintf(archivo, "|    Promedio  |       %.2f       |\n", promedio);
    fprintf(archivo, "---------------------------------\n");

    fclose(archivo);
    printf("Datos escritos en el archivo 'calificaciones.txt'\n");

    return 0;
}
