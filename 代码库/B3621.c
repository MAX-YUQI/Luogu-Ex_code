#include <stdio.h>

int n, k;
int a[10];

void dfs(int depth) {
    if (depth == n) {
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= k; i++) {
        a[depth] = i;
        dfs(depth + 1);
    }
}

int main() {
    scanf("%d%d", &n, &k);
    dfs(0);
    return 0;
}
