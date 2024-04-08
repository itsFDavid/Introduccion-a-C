#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("ventas.txt", "w");

    int cantidad_dias;
    printf("Ingrese la cantidad de dias: ");
    scanf("%d", &cantidad_dias);

    float ventas_dia, total_ventas = 0;
    fprintf(archivo, "-------------------------\n");
    fprintf(archivo, "|  Dia  |   Ventas   |\n");
    fprintf(archivo, "-------------------------\n");
    for (int i = 0; i < cantidad_dias; i++) {
        printf("Ingrese las ventas del dia #%d: ", i + 1);
        scanf("%f", &ventas_dia);
        fprintf(archivo, "|  %-4d |  %-9.2f  |\n", i + 1, ventas_dia);
        total_ventas += ventas_dia;
    }
    fprintf(archivo, "-------------------------\n");
    fprintf(archivo, "| Total |  %-9.2f  |\n", total_ventas);
    fprintf(archivo, "-------------------------\n");

    fclose(archivo);
    printf("Datos escritos en el archivo 'ventas.txt'\n");

    return 0;
}
