#include <stdio.h>  
#include <stdlib.h>  
  
int Sum(int arr[], int size) {  
    int max = arr[0];
    int curr = arr[0]; 
  
    for (int i = 1; i < size; i++) {  

        curr = (arr[i] > curr + arr[i]) ? arr[i] : curr + arr[i];  

        max = (max > curr) ? max : curr;  
    }  
    return max;  
}  
  
int main() {  
    int n;  
    scanf("%d", &n);  
  
    int *a = (int *)malloc(n * sizeof(int));  
    if (a == NULL) {  
        printf("Memory allocation failed.\n");  
        return 1;  
    }  
  
    for (int i = 0; i < n; i++) {  
        scanf("%d", &a[i]);  
    }  
  
    int max_sum = Sum(a, n);  
    printf("%d\n", max_sum);  
  
    free(a);  
    return 0;  
}
