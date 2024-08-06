#include<stdio.h>  
#include<math.h>  
#include<stdbool.h>  
  
bool is_prime(long long num) {  
    if (num <= 1) return false;  
    if (num <= 3) return true;  
    if (num % 2 == 0 || num % 3 == 0) return false;  
    for (long long j = 5; j <= sqrt(num); j += 6) {  
        if (num % j == 0 || num % (j + 2) == 0) return false;  
    }  
    return true;  
}  
  
bool is_palindrome(long long num) {  
    long long reversed = 0, original = num, remainder;  
    while (original != 0) {  
        remainder = original % 10;  
        reversed = reversed * 10 + remainder;  
        original /= 10;  
    }  
    return reversed == num;  
}  
  
int main() {  
    long long a, b;  
    scanf("%lld %lld", &a, &b);  
  
    for (long long i = a; i <= b; i++) {  
        if (is_palindrome(i) && is_prime(i)) {  
            printf("%lld\n", i);  
        }  
    }  
  
    return 0;  
}
