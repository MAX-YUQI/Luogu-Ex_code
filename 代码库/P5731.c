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
    
    // 初始化矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }
    
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    while (num <= n * n) {
        // 从左到右填充上边界
        for (int i = left; i <= right && num <= n * n; i++) {
            matrix[top][i] = num++;
        }
        top++;
        
        // 从上到下填充右边界
        for (int i = top; i <= bottom && num <= n * n; i++) {
            matrix[i][right] = num++;
        }
        right--;
        
        // 从右到左填充下边界
        for (int i = right; i >= left && num <= n * n; i--) {
            matrix[bottom][i] = num++;
        }
        bottom--;
        
        // 从下到上填充左边界
        for (int i = bottom; i >= top && num <= n * n; i--) {
            matrix[i][left] = num++;
        }
        left++;
    }
    
    // 输出矩阵
    printMatrix(n, matrix);
}

int main() {
    int n;
    scanf("%d", &n);
    fillSpiralMatrix(n);
    return 0;
}
