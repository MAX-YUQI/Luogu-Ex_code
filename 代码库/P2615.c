#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int square[n][n];
    memset(square, 0, sizeof(square)); // 初始化幻方为0

    int row = 0, col = n / 2; // 从第一行中间的位置开始
    for (int num = 1; num <= n * n; num++) {
        square[row][col] = num;
        int new_row = (row - 1 + n) % n; // 计算新的行
        int new_col = (col + 1) % n; // 计算新的列
        if (square[new_row][new_col]) { // 如果新的位置已经被填充
            row = (row + 1) % n; // 则将数字填在下一行
        } else { // 否则
            row = new_row; // 更新行
            col = new_col; // 更新列
        }
    }

    // 打印幻方
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
