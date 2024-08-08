#include <stdio.h>

int main () {
    int n = 10;
    int i, row = 0, col = 0;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int direction = 0;
    int value = 1;

    int matrix[n][n];
    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }

    while (top <= bottom && left <= right) {
        if (direction == 0) {  
            for (col = left; col <= right; col++) {
                matrix[top][col] = value++;
            }
            top++;
    }

    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    }

}


