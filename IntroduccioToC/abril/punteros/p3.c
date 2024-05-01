#include <stdio.h>

void copiarArreglo(int *arr1, int *arr2, int n) {
    for (int i = 0; i < n; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];
    int n = sizeof(arr1) / sizeof(arr1[0]);
    
    copiarArreglo(arr1, arr2, n);
    
    printf("Arreglo original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    
    printf("Arreglo copiado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    return 0;
}
