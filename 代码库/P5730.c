#include <stdio.h>

char W[10][5][4] = {
    {"XXX", "X.X", "X.X", "X.X", "XXX"},
    {"..X", "..X", "..X", "..X", "..X"},
    {"XXX", "..X", "XXX", "X..", "XXX"},
    {"XXX", "..X", "XXX", "..X", "XXX"},
    {"X.X", "X.X", "XXX", "..X", "..X"},
    {"XXX", "X..", "XXX", "..X", "XXX"},
    {"XXX", "X..", "XXX", "X.X", "XXX"},
    {"XXX", "..X", "..X", "..X", "..X"},
    {"XXX", "X.X", "XXX", "X.X", "XXX"},
    {"XXX", "X.X", "XXX", "..X", "XXX"}
};

int main() {
    int n;
    scanf("%d", &n);
    char s[101];
    scanf("%s", s);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < n; j++) {
            printf("%s", W[s[j] - '0'][i]);
            if (j != n - 1) printf(".");
        }
        printf("\n");
    }

    return 0;
}
