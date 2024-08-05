//#include<stdio.h>
//#include<math.h>
//
//int prime(long long num){
//	if(num <= 1) return 0;
//	for(long long j = 2;j <= sqrt(num);j++){
//		if(num % j == 0) return 0;
//	}
//	return 1;
//	
//}
//
//int palidrome(long long num){
//	long long x = 0, y = num, z;
//	while(y != 0){
//		z = y % 10;
//		x = x*10 + z;
//		y /= 10;
//		
//	}
//	
//	return x == num;
//}
//int main()
//{
//	long long a,b,count = 0;
//	long long c[100000];
//	
//	scanf("%lld %lld",&a,&b);
//	
//	for(long long i = a;i <= b;i++){
//		
//		if(prime(i) && palidrome(i)){
//			c[count++] = (int)i;
//		}
//	}
//	
//	for(int i = 0;i < count;i++){
//		printf("%lld\n",c[i]);
//	}
//	
//	return 0;
//}

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
