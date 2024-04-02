#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTOS 100

typedef struct {
    char nombre[50];
    float precio;
} Producto;

void ordenarProductos(Producto* productos, int numProductos) {
    for (int i = 1; i < numProductos; i++) {
        Producto temp = productos[i];
        int j = i - 1;
        while (j >= 0 && productos[j].precio > temp.precio) {
            productos[j + 1] = productos[j];
            j--;
        }
        productos[j + 1] = temp;
    }
}

int buscarProducto(Producto* productos, int numProductos, const char* nombre) {
    int inicio = 0, fin = numProductos - 1;
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (strcmp(productos[medio].nombre, nombre) == 0) {
            return medio;
        }
        if (strcmp(productos[medio].nombre, nombre) < 0) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return -1;
}

int main() {
    Producto* productos = malloc(MAX_PRODUCTOS * sizeof(Producto));
    if (productos == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    int numProductos = 0;
    char opcion;
    do {
        printf("Ingrese el nombre del producto: ");
        scanf("%s", productos[numProductos].nombre);
        printf("Ingrese el precio del producto: ");
        scanf("%f", &productos[numProductos].precio);

        numProductos++;

        printf("¿Desea agregar otro producto? (s/n): ");
        scanf(" %c", &opcion);
    } while (opcion == 's' && numProductos < MAX_PRODUCTOS);

    ordenarProductos(productos, numProductos);

    char nombreBusqueda[50];
    printf("Ingrese el nombre del producto a buscar: ");
    scanf("%s", nombreBusqueda);

    int indice = buscarProducto(productos, numProductos, nombreBusqueda);
    if (indice != -1) {
        printf("Producto encontrado:\n");
        printf("Nombre: %s\n", productos[indice].nombre);
        printf("Precio: %.2f\n", productos[indice].precio);
    } else {
        printf("Producto no encontrado.\n");
    }

    free(productos);
    return 0;
}
