#include <stdio.h>

void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
}

void fillSpiralMatrix(int n) {
    int matrix[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }
    
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (num <= n * n) {

        for (int i = left; i <= right && num <= n * n; i++) {
            matrix[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom && num <= n * n; i++) {
            matrix[i][right] = num++;
        }
        right--;

        for (int i = right; i >= left && num <= n * n; i--) {
            matrix[bottom][i] = num++;
        }
        bottom--;

        for (int i = bottom; i >= top && num <= n * n; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }

    printMatrix(n, matrix);
}

int main() {
    int n;
    scanf("%d", &n);
    fillSpiralMatrix(n);
    return 0;
}
