#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ESTUDIANTES 100

typedef struct {
    char nombre[50];
    int edad;
    char carrera[50];
} Estudiante;

void ordenarEstudiantes(Estudiante* estudiantes, int numEstudiantes) {
    for (int i = 0; i < numEstudiantes - 1; i++) {
        for (int j = 0; j < numEstudiantes - i - 1; j++) {
            if (strcmp(estudiantes[j].nombre, estudiantes[j + 1].nombre) > 0) {
                Estudiante temp = estudiantes[j];
                estudiantes[j] = estudiantes[j + 1];
                estudiantes[j + 1] = temp;
            }
        }
    }
}

int buscarEstudiante(Estudiante* estudiantes, int numEstudiantes, const char* nombre) {
    for (int i = 0; i < numEstudiantes; i++) {
        if (strcmp(estudiantes[i].nombre, nombre) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    Estudiante* estudiantes = malloc(MAX_ESTUDIANTES * sizeof(Estudiante));
    if (estudiantes == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    int numEstudiantes = 0;
    char opcion;
    do {
        printf("Ingrese el nombre del estudiante: ");
        scanf("%s", estudiantes[numEstudiantes].nombre);
        printf("Ingrese la edad del estudiante: ");
        scanf("%d", &estudiantes[numEstudiantes].edad);
        printf("Ingrese la carrera del estudiante: ");
        scanf("%s", estudiantes[numEstudiantes].carrera);

        numEstudiantes++;

        printf("¿Desea agregar otro estudiante? (s/n): ");
        scanf(" %c", &opcion);
    } while (opcion == 's' && numEstudiantes < MAX_ESTUDIANTES);

    ordenarEstudiantes(estudiantes, numEstudiantes);

    char nombreBusqueda[50];
    printf("Ingrese el nombre del estudiante a buscar: ");
    scanf("%s", nombreBusqueda);

    int indice = buscarEstudiante(estudiantes, numEstudiantes, nombreBusqueda);
    if (indice != -1) {
        printf("Estudiante encontrado:\n");
        printf("Nombre: %s\n", estudiantes[indice].nombre);
        printf("Edad: %d\n", estudiantes[indice].edad);
        printf("Carrera: %s\n", estudiantes[indice].carrera);
    } else {
        printf("Estudiante no encontrado.\n");
    }

    free(estudiantes);
    return 0;
}
