#include <stdio.h>  
#include <string.h>  
#include <stdbool.h>  
 
bool Prime(int n) {  
    if (n <= 1) return false;  
    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) return false;  
    }  
    return true;  
}  
  
int main() {  
    char word[101];  
    scanf("%s", word);  
    int len = strlen(word);  
    int count[26] = {0};

    for (int i = 0; i < len; i++) {  
        count[word[i] - 'a']++;  
    }  
  
    int maxn = 0, minn = 101;
    for (int i = 0; i < 26; i++) {  
        if (count[i] > maxn) maxn = count[i];  
        if (count[i] > 0 && count[i] < minn) minn = count[i];  
    }  
 
    if (Prime(maxn - minn)) {  
        printf("Lucky Word\n%d\n", maxn - minn);  
    } else {  
        printf("No Answer\n0\n");  
    }  
  
    return 0;  
}