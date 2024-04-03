#include <stdio.h>

int remove_duplicates(int arr[], int size) {
    int *p = arr;
    int *q = arr + 1;

    while (q < arr + size) {
        if (*p != *q) {
            *(++p) = *q;
        }
        q++;
    }

    return p - arr + 1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int new_size = remove_duplicates(arr, size);
    
    printf("Tamaño del array: %d\n", size);
    puts("Array sin eliminar duplicados: ");
    for(int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");


    printf("Nuevo tamaño del array: %d\n", new_size);
    printf("Array sin duplicados:");
    for (int i = 0; i < new_size; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    printf("\n\tTamaño reducido: %d\n", (size-new_size));

    return 0;
}
