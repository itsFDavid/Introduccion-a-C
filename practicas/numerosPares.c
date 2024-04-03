#include <stdio.h>

void find_pairs(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Par encontrado en las posiciones %d y %d\n", i, j);
            }
        }
    }
}

int main() {
    int arr[] = {2, 4, 7, 5, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    find_pairs(arr, size, target);
    return 0;
}
