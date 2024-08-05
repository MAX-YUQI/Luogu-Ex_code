#include<stdio.h>
int main()
{
	
	int a,b,c,d;
	scanf("%d",&a);
	b = (a%4==0);
	c = (a%100==0);
	d = (a%400==0);
	if((b && !c) || d){
		printf("1");
	}
	else{
		printf("0");
	}
	
	return 0;
}
