#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 1000005
unsigned long long stack[MAXN];
int top = -1;

void push(unsigned long long x) {
    stack[++top] = x;
}

void pop() {
    if(top == -1) {
        printf("Empty\n");
    } else {
        top--;
    }
}

void query() {
    if(top == -1) {
        printf("Anguei!\n");
    } else {
        printf("%llu\n", stack[top]);
    }
}

void size() {
    printf("%d\n", top + 1);
}

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int n;
        scanf("%d", &n);
        char op[10];
        unsigned long long x;
        for(int i = 0; i < n; i++) {
            scanf("%s", op);
            if(strcmp(op, "push") == 0) {
                scanf("%llu", &x);
                push(x);
            } else if(strcmp(op, "pop") == 0) {
                pop();
            } else if(strcmp(op, "query") == 0) {
                query();
            } else if(strcmp(op, "size") == 0) {
                size();
            }
        }
    }
    return 0;
}
