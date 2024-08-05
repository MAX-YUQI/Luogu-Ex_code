#include<stdio.h>
#include<math.h>

int main()
{
	int n,x=0,b=0;
	scanf("%d",&n);
	int a[n];
	
	for(int i=2;i<n;i++)
	{
		int prime = 1;
		
		for(int j=2;j<=(int)sqrt(i);j++)
		{
			if(i%j == 0)
			prime = 0;
		}
		
		if(prime){
			x += i;
			if(x > n)
			break;
			else{
				a[b] = i;
				b++;
			}
		}
		
	}
	
	for(int i=0;i<b;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	printf("%d",b);
	return 0;
	
}
