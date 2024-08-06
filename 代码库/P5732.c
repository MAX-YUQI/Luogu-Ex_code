#include <stdio.h>

void generateYanghuiTriangle(int n, int triangle[][n]) {

    triangle[0][0] = 1;
    for (int i = 1; i < n; i++) {

        triangle[i][0] = 1;
        triangle[i][i] = 1;

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

    int triangle[n][n];

    generateYanghuiTriangle(n, triangle);

    printYanghuiTriangle(n, triangle);

    return 0;
}
