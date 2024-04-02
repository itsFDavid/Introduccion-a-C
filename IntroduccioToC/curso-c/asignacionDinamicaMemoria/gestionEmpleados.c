#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLEADOS 100

typedef struct {
    char nombre[50];
    int edad;
    float salario;
} Empleado;

void ordenarEmpleados(Empleado* empleados, int numEmpleados) {
    for (int i = 0; i < numEmpleados - 1; i++) {
        int min = i;
        for (int j = i + 1; j < numEmpleados; j++) {
            if (empleados[j].salario < empleados[min].salario) {
                min = j;
            }
        }
        Empleado temp = empleados[i];
        empleados[i] = empleados[min];
        empleados[min] = temp;
    }
}

int buscarEmpleado(Empleado* empleados, int numEmpleados, const char* nombre) {
    for (int i = 0; i < numEmpleados; i++) {
        if (strcmp(empleados[i].nombre, nombre) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    Empleado* empleados = malloc(MAX_EMPLEADOS * sizeof(Empleado));
    if (empleados == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    int numEmpleados = 0;
    char opcion;
    do {
        printf("Ingrese el nombre del empleado: ");
        scanf("%s", empleados[numEmpleados].nombre);
        printf("Ingrese la edad del empleado: ");
        scanf("%d", &empleados[numEmpleados].edad);
        printf("Ingrese el salario del empleado: ");
        scanf("%f", &empleados[numEmpleados].salario);

        numEmpleados++;

        printf("¿Desea agregar otro empleado? (s/n): ");
        scanf(" %c", &opcion);
    } while (opcion == 's' && numEmpleados < MAX_EMPLEADOS);

    ordenarEmpleados(empleados, numEmpleados);

    char nombreBusqueda[50];
    printf("Ingrese el nombre del empleado a buscar: ");
    scanf("%s", nombreBusqueda);

    int indice = buscarEmpleado(empleados, numEmpleados, nombreBusqueda);
    if (indice != -1) {
        printf("Empleado encontrado:\n");
        printf("Nombre: %s\n", empleados[indice].nombre);
        printf("Edad: %d\n", empleados[indice].edad);
        printf("Salario: %.2f\n", empleados[indice].salario);
    } else {
        printf("Empleado no encontrado.\n");
    }

    free(empleados);
    return 0;
}
