#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	int c;
	scanf("%f %f",&a,&b);
	a += b/10;
	a /= 1.9;
	c = (int)floor(a);
	printf("%d",c);
	
	return 0;
}
