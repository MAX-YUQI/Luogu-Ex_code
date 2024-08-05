#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
    // 读取输入的压缩码
    char input[1000];
    fgets(input, 1000, stdin);

    // 解析输入
    int N, count = 0;
    int compressed[1000];
    char *token = strtok(input, " ");
    
    while (token != NULL) {
        compressed[count++] = atoi(token);
        token = strtok(NULL, " ");
    }

    N = compressed[0]; // 第一个数表示矩阵的大小 N
    
    // 初始化 N x N 矩阵
    int matrix[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = 0;
        }
    }

    // 填充矩阵
    int idx = 1;
    int value = 0; // 0 或 1
    int row = 0, col = 0;

    while (idx < count) {
        int length = compressed[idx++];
        for (int i = 0; i < length; i++) {
            matrix[row][col] = value;
            col++;
            if (col == N) {
                col = 0;
                row++;
            }
        }
        value = 1 - value; // 交替填充0和1
    }

    // 输出结果
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
