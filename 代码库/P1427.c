#include<stdio.h>

int main()
{
	char a[101];
	int x,i=0;
	
	while(1){
		scanf("%d",&x);
		
		a[i] = x;
		i++;
		
		if(x == 0){
			break;
		}
	}
	
	for(int j=i-2;j>=0;j--)
	printf("%d ",a[j]);
	
	return 0;
}
