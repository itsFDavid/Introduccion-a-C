#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("temperaturas.txt", "w");

    char dias_semana[7][10] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

    float temp;
    fprintf(archivo, "-------------------------\n");
    fprintf(archivo, "|   Dia   |  Temperatura  |\n");
    fprintf(archivo, "-------------------------\n");
    for (int i = 0; i < 7; i++) {
        printf("Ingrese la temperatura del %s: ", dias_semana[i]);
        scanf("%f", &temp);
        fprintf(archivo, "|  %-6s |    %-8.2f   |\n", dias_semana[i], temp);
    }
    fprintf(archivo, "-------------------------\n");

    fclose(archivo);
    printf("Datos escritos en el archivo 'temperaturas.txt'\n");

    return 0;
}
