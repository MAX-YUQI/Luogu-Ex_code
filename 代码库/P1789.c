#include <stdio.h>
#include<stdlib.h>

void Huoba(int n, int grid[n][n], int x, int y) {
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            if (x + i >= 0 && x + i < n && y + j >= 0 && y + j < n) {
                if (abs(i) + abs(j) <= 2) {
                    grid[x + i][y + j] = 1;
                }
            }
        }
    }
}

void Yingshi(int n, int grid[n][n], int x, int y) {
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            if (x + i >= 0 && x + i < n && y + j >= 0 && y + j < n) {
                grid[x + i][y + j] = 1;
            }
        }
    }
}

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int grid[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            grid[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        Huoba(n, grid, x - 1, y - 1);
    }

    for (int i = 0; i < k; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        Yingshi(n, grid, x - 1, y - 1);
    }

    int darkCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 0) {
                darkCount++;
            }
        }
    }

    printf("%d\n", darkCount);

    return 0;
}
