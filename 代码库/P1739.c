#include <stdio.h>
#include <string.h>

#define MAX_LEN 255

int main() {
    char expr[MAX_LEN];
    int stack[MAX_LEN], top = -1;

    scanf("%s", expr);
    int len = strlen(expr);

    for (int i = 0; i < len; i++) {
        if (expr[i] == '(') {
            stack[++top] = '(';
        } else if (expr[i] == ')') {
            if (top == -1) {
                printf("NO\n");
                return 0;
            }
            top--;
        }
    }

    if (top == -1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
