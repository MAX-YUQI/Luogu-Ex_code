#include <stdio.h>
#include <stdlib.h>

#define MAX 10000

int main() {
    int n;
    scanf("%d", &n);

    int nums[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int count = 0;
    int* hash = (int*)calloc(MAX, sizeof(int));
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = nums[i] + nums[j];
            if (sum < MAX) {
                hash[sum]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] < MAX && hash[nums[i]] > 0) {
            count++;
        }
    }

    printf("%d\n", count);

    free(hash);
    return 0;
}
