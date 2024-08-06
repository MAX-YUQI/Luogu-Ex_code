#include<stdio.h>
#include<math.h>
int main()
{
	int m,t,s;
	scanf("%d %d %d",&m,&t,&s);
	if(t == 0)
	{
		printf("0");
	}
	else
	{
		if(s%t == 0)
		{
			printf("%d",m-(s/t));
		}
		else{
			printf("%d",m-(int)ceil(s/t));
		}
		
	}
	
	return 0;
}
