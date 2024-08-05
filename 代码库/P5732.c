#include <stdio.h>

void generateYanghuiTriangle(int n, int triangle[][n]) {
    // 初始化第一行
    triangle[0][0] = 1;
    for (int i = 1; i < n; i++) {
        // 每一行的第一个和最后一个数字都是1
        triangle[i][0] = 1;
        triangle[i][i] = 1;
        // 填充中间的数字
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }
}

void printYanghuiTriangle(int n, int triangle[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    // 声明一个二维数组存储杨辉三角
    int triangle[n][n];

    // 生成杨辉三角
    generateYanghuiTriangle(n, triangle);

    // 输出杨辉三角
    printYanghuiTriangle(n, triangle);

    return 0;
}
