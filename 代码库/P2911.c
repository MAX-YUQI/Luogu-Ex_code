#include <stdio.h>

int main() {
    int s1, s2, s3;
    scanf("%d %d %d", &s1, &s2, &s3);

    // 定义一个计数数组，最大值为 s1 + s2 + s3
    int maxSum = s1 + s2 + s3;
    int count[maxSum + 1];
    
    // 初始化计数数组
    for (int i = 0; i <= maxSum; i++) {
        count[i] = 0;
    }

    // 计算所有可能的和，并统计每个和的出现次数
    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                int sum = i + j + k;
                count[sum]++;
            }
        }
    }

    // 找出出现次数最多的和
    int mostFrequentSum = 0;
    int maxCount = 0;
    for (int i = 3; i <= maxSum; i++) {  // 和的最小值为3 (1+1+1)
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentSum = i;
        }
    }

    printf("%d\n", mostFrequentSum);

    return 0;
}
