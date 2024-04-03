#include <stdio.h>
#include <string.h>

void sort_strings(char *arr[], int size) {
    char *temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    char *arr[] = {"banana", "apple", "orange", "grape", "kiwi"};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array original:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

    sort_strings(arr, size);

    printf("\nArray ordenado alfabéticamente:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
