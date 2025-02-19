//How to Declare a Two-Dimensional Array of Pointers in C?
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr[3];
    
    for (int i = 0; i < 3; i++) {
        arr[i] = (int*)malloc(4 * sizeof(int));
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = i * 4 + j + 1;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        free(arr[i]);
    }

    return 0;
}
