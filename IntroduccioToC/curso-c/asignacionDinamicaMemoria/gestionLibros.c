#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIBROS 100

typedef struct {
    char titulo[100];
    char autor[50];
    int anio;
} Libro;

void merge(Libro* arr, int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;

    Libro L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[izquierda + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[medio + 1 + j];

    int i = 0, j = 0, k = izquierda;
    while (i < n1 && j < n2) {
        if (L[i].anio <= R[j].anio) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(Libro* arr, int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        mergeSort(arr, izquierda, medio);
        mergeSort(arr, medio + 1, derecha);
        merge(arr, izquierda, medio, derecha);
    }
}

int buscarLibro(Libro* libros, int numLibros, const char* titulo) {
    for (int i = 0; i < numLibros; i++) {
        if (strcmp(libros[i].titulo, titulo) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    Libro* libros = malloc(MAX_LIBROS * sizeof(Libro));
    if (libros == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    int numLibros = 0;
    char opcion;
    do {
        printf("Ingrese el título del libro: ");
        scanf(" %[^\n]", libros[numLibros].titulo);
        printf("Ingrese el autor del libro: ");
        scanf(" %[^\n]", libros[numLibros].autor);
        printf("Ingrese el año de publicación del libro: ");
        scanf("%d", &libros[numLibros].anio);

        numLibros++;

        printf("¿Desea agregar otro libro? (s/n): ");
        scanf(" %c", &opcion);
    } while (opcion == 's' && numLibros < MAX_LIBROS);

    mergeSort(libros, 0, numLibros - 1);

    char tituloBusqueda[100];
    printf("Ingrese el título del libro a buscar: ");
    scanf(" %[^\n]", tituloBusqueda);

    int indice = buscarLibro(libros, numLibros, tituloBusqueda);
    if (indice != -1) {
        printf("Libro encontrado:\n");
        printf("Título: %s\n", libros[indice].titulo);
        printf("Autor: %s\n", libros[indice].autor);
        printf("Año de publicación: %d\n", libros[indice].anio);
    } else {
        printf("Libro no encontrado.\n");
    }

    free(libros);
    return 0;
}
