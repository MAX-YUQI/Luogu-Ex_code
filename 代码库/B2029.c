#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	int h,r,n;
	double v;
	scanf("%d %d",&h,&r);
	v = pi * r * r * h;
	n = (int)ceil(20000/v);
	
	printf("%d",n);
	
	return 0;
}
