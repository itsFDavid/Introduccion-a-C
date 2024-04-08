#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("inventario.txt", "w");

    int cantidad_productos;
    printf("Ingrese la cantidad de productos: ");
    scanf("%d", &cantidad_productos);

    char nombre[50];
    float precio;
    fprintf(archivo, "---------------------------------\n");
    fprintf(archivo, "|    Producto    |    Precio    |\n");
    fprintf(archivo, "---------------------------------\n");
    for (int i = 0; i < cantidad_productos; i++) {
        printf("Ingrese el nombre del producto #%d: ", i + 1);
        scanf("%s", nombre);
        printf("Ingrese el precio de %s: ", nombre);
        scanf("%f", &precio);
        fprintf(archivo, "|  %-12s |  %-10.2f  |\n", nombre, precio);
    }
    fprintf(archivo, "---------------------------------\n");

    fclose(archivo);
    printf("Datos escritos en el archivo 'inventario.txt'\n");

    return 0;
}
