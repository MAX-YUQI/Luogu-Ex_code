#include<stdio.h>

int main()
{
	int n = 0, s = 0;
	scanf("%d",&n);
	
	while(n){
		s = s*10 + n%10;
		n /= 10;
		
	}
	
	printf("%d",s);
	
	return 0;
}
