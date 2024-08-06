#include <stdio.h>  
  
int main() {  
    int k, n = 1, total = 0, current_sum = 0, days = 0;  
  
    scanf("%d", &k);  
  
    while (days < k) {  
        current_sum = n * n;  
  
        if (days + n > k) {  
            total += (k - days) * n;  
            break;  
        }  

        total += current_sum;  
        days += n;  
        n++;
    }  
  
    printf("%d\n", total);  
  
    return 0;  
}
