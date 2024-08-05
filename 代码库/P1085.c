#include<stdio.h>
int main()
{
	int a,b,count = 0,max = 0;
	for(int i=0;i<7;i++)
	{
		scanf("%d %d",&a,&b);
		
		if(a + b > 8 && a + b > max){
			max = a + b;
			count = i+1;
			
		}
	}
	
	printf("%d",count);
	
	return 0;
}
