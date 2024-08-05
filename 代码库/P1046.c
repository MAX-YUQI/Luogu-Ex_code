#include<stdio.h>
int main()
{
	int a[10],h,num=0;
	for(int i = 0;i<10;++i)
	{
		scanf("%d ",&a[i]);
	}
	scanf("%d",&h);
	
	for(int j = 0;j<10;++j)
	{
		if(a[j]<=h+30)
		{
			num++;
		}
	}
	
	printf("%d",num);
	return 0;
}
