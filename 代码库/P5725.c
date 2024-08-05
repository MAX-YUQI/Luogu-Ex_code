#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n*n;i++){
		printf("%.2d",i);
		if(i % n == 0)
		printf("\n");
	}
	
	printf("\n");
	
	
	for(int i=1;i<=n;i++){
		      
		for(int j=0;j<n-i;j++){
			printf("  ");
		}
		for(int j=1;j<=i;j++){
			int num = (i*(i-1)) / 2 + j;
			printf("%.2d",num);
			
		}
		printf("\n");
		
	}
		
	return 0;
}
