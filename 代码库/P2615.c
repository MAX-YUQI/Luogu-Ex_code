#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int square[n][n];
    memset(square, 0, sizeof(square));

    int row = 0, col = n / 2;
    for (int num = 1; num <= n * n; num++) {
        square[row][col] = num;
        int new_row = (row - 1 + n) % n;
        int new_col = (col + 1) % n;
        if (square[new_row][new_col]) {
            row = (row + 1) % n;
        } else {
            row = new_row;
            col = new_col;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", square[i][j]);
        }
        printf("\n");
    }

    return 0;
}
