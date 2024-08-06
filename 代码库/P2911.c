#include <stdio.h>

int main() {
    int s1, s2, s3;
    scanf("%d %d %d", &s1, &s2, &s3);

    int maxSum = s1 + s2 + s3;
    int count[maxSum + 1];

    for (int i = 0; i <= maxSum; i++) {
        count[i] = 0;
    }

    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                int sum = i + j + k;
                count[sum]++;
            }
        }
    }

    int mostFrequentSum = 0;
    int maxCount = 0;
    for (int i = 3; i <= maxSum; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentSum = i;
        }
    }

    printf("%d\n", mostFrequentSum);

    return 0;
}
