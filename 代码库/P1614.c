#include<stdio.h>  
  
int main() {  
    int n, m;  
    int a[3001]; 
    int minSum = 100000;
    int currentSum = 0;  
  
    scanf("%d %d", &n, &m);  

    for (int i = 0; i < n; i++) {  
        scanf("%d", &a[i]);  
    }  

    for (int i = 0; i < m; i++) {  
        currentSum += a[i];  
    }  
    minSum = currentSum;

    for (int i = m; i < n; i++) {  
        currentSum = currentSum - a[i - m] + a[i];
        if (currentSum < minSum) {  
            minSum = currentSum;
        }  
    }  

    printf("%d\n", minSum);  
  
    return 0;  
}