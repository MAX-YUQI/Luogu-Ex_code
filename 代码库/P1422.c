#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f",&a);
	if(a <= 150)
	{
		printf("%.1f",a*0.4463);
	}
	else if(a >= 151 && a <= 400)
	{
		b = (a-150)*0.4663+150*0.4463;
		printf("%.1f",b);
	}
	else if(a >= 401)
	{
		c = 150*0.4463 + 250*0.4663 + (a-400)*0.5663;
		printf("%.1f",c);
	}
	
	
	return 0;
}
