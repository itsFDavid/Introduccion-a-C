#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUMNOS 100

typedef struct {
    char nombre[50];
    float promedio;
} Alumno;

int partition(Alumno* arr, int inicio, int fin) {
    Alumno pivot = arr[fin];
    int i = inicio - 1;
    for (int j = inicio; j < fin; j++) {
        if (arr[j].promedio < pivot.promedio) {
            i++;
            Alumno temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    Alumno temp = arr[i + 1];
    arr[i + 1] = arr[fin];
    arr[fin] = temp;
    return i + 1;
}

void quickSort(Alumno* arr, int inicio, int fin) {
    if (inicio < fin) {
        int pi = partition(arr, inicio, fin);
        quickSort(arr, inicio, pi - 1);
        quickSort(arr, pi + 1, fin);
    }
}

int buscarAlumno(Alumno* alumnos, int numAlumnos, const char* nombre) {
    int inicio = 0, fin = numAlumnos - 1;
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (strcmp(alumnos[medio].nombre, nombre) == 0) {
            return medio;
        }
        if (strcmp(alumnos[medio].nombre, nombre) < 0) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return -1;
}

int main() {
    Alumno* alumnos = malloc(MAX_ALUMNOS * sizeof(Alumno));
    if (alumnos == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    int numAlumnos = 0;
    char opcion;
    do {
        printf("Ingrese el nombre del alumno: ");
        scanf("%s", alumnos[numAlumnos].nombre);
        printf("Ingrese el promedio del alumno: ");
        scanf("%f", &alumnos[numAlumnos].promedio);

        numAlumnos++;

        printf("¿Desea agregar otro alumno? (s/n): ");
        scanf(" %c", &opcion);
    } while (opcion == 's' && numAlumnos < MAX_ALUMNOS);

    quickSort(alumnos, 0, numAlumnos - 1);

    char nombreBusqueda[50];
    printf("Ingrese el nombre del alumno a buscar: ");
    scanf("%s", nombreBusqueda);

    int indice = buscarAlumno(alumnos, numAlumnos, nombreBusqueda);
    if (indice != -1) {
        printf("Alumno encontrado:\n");
        printf("Nombre: %s\n", alumnos[indice].nombre);
        printf("Promedio: %.2f\n", alumnos[indice].promedio);
    } else {
        printf("Alumno no encontrado.\n");
    }

    free(alumnos);
    return 0;
}
