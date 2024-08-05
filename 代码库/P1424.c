#include<stdio.h>
int main()
{
	int x,n;
	int sum = 0;
	
	scanf("%d %d",&x,&n);
	for(;n>0;n--)
	{
		if(x%7>=1 && x%7<=5)
		{
			sum += 250;
			x++;
		}
		else
		{
			x++;
		}
	}
	
	printf("%d",sum);
	
	return 0;
}
