#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	double a,b,c,d,e;
	scanf("%d",&n);
	
	a = (1+sqrt(5)) / 2;
	b = (1-sqrt(5)) / 2;
	c = (double)pow(a,n);
	d = (double)pow(b,n);
	e = (c-d) / sqrt(5);
	
	printf("%.2f",e);
	
	return 0;
}
