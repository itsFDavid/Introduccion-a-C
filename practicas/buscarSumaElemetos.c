#include <stdio.h>

void find_sum_positions(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Elementos en las posiciones %d y %d suman %d\n", i, j, target);
            }
        }
    }
}

int main() {
    int arr[] = {2, 4, 7, 5, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    find_sum_positions(arr, size, target);
    return 0;
}
