#include<stdio.h>
int main()
{
	long long int n,x,a,c;
	int b=0;
	scanf("%lld %lld",&n,&x);
	
	for(int i=1;i<=n;i++){
		a = i;
		while(a != 0){
			c = a%10;
			a = a/10;
			if(c == x)
			b++;
		}
	}
	
	printf("%d",b);
	
	return 0;
}
