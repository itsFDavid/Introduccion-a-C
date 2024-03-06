#include <stdio.h>
#include <string.h>

#define MAX_EMPLEADOS 100

struct Empleado {
    char nombre[50];
    char cargo[50];
    float salario;
};

int main() {
    struct Empleado empleados[MAX_EMPLEADOS];
    int numEmpleados = 0;
    int opcion;

    do {
        printf("\nMenú de opciones:\n");
        printf("1. Agregar empleado\n");
        printf("2. Mostrar lista de empleados\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                if (numEmpleados < MAX_EMPLEADOS) {
                    printf("\nIngrese el nombre del empleado: ");
                    scanf("%s", empleados[numEmpleados].nombre);
                    printf("Ingrese el cargo del empleado: ");
                    scanf("%s", empleados[numEmpleados].cargo);
                    printf("Ingrese el salario del empleado: ");
                    scanf("%f", &empleados[numEmpleados].salario);
                    numEmpleados++;
                    printf("Empleado agregado con éxito.\n");
                } else {
                    printf("No se pueden agregar más empleados. Límite alcanzado.\n");
                }
                break;
            case 2:
                if (numEmpleados > 0) {
                    printf("\nLista de empleados:\n");
                    for (int i = 0; i < numEmpleados; i++) {
                        printf("Empleado %d:\n", i + 1);
                        printf("Nombre: %s\n", empleados[i].nombre);
                        printf("Cargo: %s\n", empleados[i].cargo);
                        printf("Salario: %.2f\n", empleados[i].salario);
                    }
                } else {
                    printf("No hay empleados para mostrar.\n");
                }
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Por favor, seleccione una opción válida.\n");
        }
    } while (opcion != 3);

    return 0;
}
