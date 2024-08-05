#include <stdio.h>
#define MAXN 5000005

int n, p;
int a[MAXN], b[MAXN], c[MAXN];

int main() {
    scanf("%d%d", &n, &p);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        b[i] = b[i-1] + a[i];
    }
    while(p--) {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        b[x] += z;
        b[y+1] -= z;
    }
    for(int i = 1; i <= n; i++) {
        c[i] = c[i-1] + b[i];
    }
    int min = c[1];
    for(int i = 2; i <= n; i++) {
        if(c[i] < min) {
            min = c[i];
        }
    }
    printf("%d\n", min);
    return 0;
}
