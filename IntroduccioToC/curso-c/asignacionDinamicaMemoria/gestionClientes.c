#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CLIENTES 100

typedef struct {
    char nombre[50];
    char apellido[50];
    int edad;
} Cliente;

void shellSort(Cliente* arr, int numClientes) {
    for (int brecha = numClientes / 2; brecha > 0; brecha /= 2) {
        for (int i = brecha; i < numClientes; i += 1) {
            Cliente temp = arr[i];
            int j;
            for (j = i; j >= brecha && strcmp(arr[j - brecha].apellido, temp.apellido) > 0; j -= brecha) {
                arr[j] = arr[j - brecha];
            }
            arr[j] = temp;
        }
    }
}

int buscarCliente(Cliente* clientes, int numClientes, const char* apellido) {
    for (int i = 0; i < numClientes; i++) {
        if (strcmp(clientes[i].apellido, apellido) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    Cliente* clientes = malloc(MAX_CLIENTES * sizeof(Cliente));
    if (clientes == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    int numClientes = 0;
    char opcion;
    do {
        printf("Ingrese el nombre del cliente: ");
        scanf("%s", clientes[numClientes].nombre);
        printf("Ingrese el apellido del cliente: ");
        scanf("%s", clientes[numClientes].apellido);
        printf("Ingrese la edad del cliente: ");
        scanf("%d", &clientes[numClientes].edad);

        numClientes++;

        printf("¿Desea agregar otro cliente? (s/n): ");
        scanf(" %c", &opcion);
    } while (opcion == 's' && numClientes < MAX_CLIENTES);

    shellSort(clientes, numClientes);

    char apellidoBusqueda[50];
    printf("Ingrese el apellido del cliente a buscar: ");
    scanf("%s", apellidoBusqueda);

    int indice = buscarCliente(clientes, numClientes, apellidoBusqueda);
    if (indice != -1) {
        printf("Cliente encontrado:\n");
        printf("Nombre: %s\n", clientes[indice].nombre);
        printf("Apellido: %s\n", clientes[indice].apellido);
        printf("Edad: %d\n", clientes[indice].edad);
    } else {
        printf("Cliente no encontrado.\n");
    }

    free(clientes);
    return 0;
}
