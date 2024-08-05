#include<stdio.h>
int main()
{
	
	double s,sum = 0.0,temp = 2;
	int a = 0;
	scanf("%lf",&s);
	
	while(sum <= s){
		
		sum = sum + temp;
		temp = temp*0.98;
		a++;	
		
	}
	
	printf("%d",a);
	return 0;
}
