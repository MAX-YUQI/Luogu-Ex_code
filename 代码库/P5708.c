#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,n,p;
	scanf("%lf %lf %lf",&a,&b,&c);
	p = (a+b+c)/2;
	n = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.1lf",n);
	
	return 0;
}
