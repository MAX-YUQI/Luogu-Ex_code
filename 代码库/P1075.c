#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	
	for(i=2;i<n;i++){
		int prime = 1;
		for(j = 2;j<sqrt(i);j++){
			if(i % j == 0)
			prime = 0;
			break;
		}
		if(prime){
			if(n%i == 0){
				printf("%d",n/i);
				return 0;
			}
		}
	}

}
