#include <stdio.h>
#define MAX_SIZE 10000

int queue[MAX_SIZE];
int front = 0;
int rear = 0;

void push(int x) {
    queue[rear++] = x;
}

void pop() {
    if (front == rear) {
        printf("ERR_CANNOT_POP\n");
    } else {
        front++;
    }
}

void query() {
    if (front == rear) {
        printf("ERR_CANNOT_QUERY\n");
    } else {
        printf("%d\n", queue[front]);
    }
}

void size() {
    printf("%d\n", rear - front);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int op;
        scanf("%d", &op);
        if (op == 1) {
            int x;
            scanf("%d", &x);
            push(x);
        } else if (op == 2) {
            pop();
        } else if (op == 3) {
            query();
        } else if (op == 4) {
            size();
        }
    }
    return 0;
}
