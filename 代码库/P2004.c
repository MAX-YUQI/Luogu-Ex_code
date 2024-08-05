#include <stdio.h>
#define MAXN 1005

int n, m, c;
int map[MAXN][MAXN], sum[MAXN][MAXN];

int main() {
    scanf("%d%d%d", &n, &m, &c);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            scanf("%d", &map[i][j]);
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + map[i][j];
        }
    }
    int max = -1e9, x, y;
    for(int i = c; i <= n; i++) {
        for(int j = c; j <= m; j++) {
            int temp = sum[i][j] - sum[i-c][j] - sum[i][j-c] + sum[i-c][j-c];
            if(temp > max) {
                max = temp;
                x = i - c + 1;
                y = j - c + 1;
            }
        }
    }
    printf("%d %d\n", x, y);
    return 0;
}
