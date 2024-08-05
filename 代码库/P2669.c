#include <stdio.h>  
  
int main() {  
    int k, n = 1, total = 0, current_sum = 0, days = 0;  
  
    scanf("%d", &k);  
  
    while (days < k) {  
        // 计算当前周期的金币总数  
        current_sum = n * n;  
  
        // 如果加上当前周期的金币数会超过k，则只累加部分天数  
        if (days + n > k) {  
            total += (k - days) * n;  
            break;  
        }  
  
        // 否则，累加整个周期的金币数  
        total += current_sum;  
        days += n;  
        n++; // 进入下一个周期  
    }  
  
    printf("%d\n", total);  
  
    return 0;  
}
