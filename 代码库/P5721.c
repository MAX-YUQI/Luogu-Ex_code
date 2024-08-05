#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int b=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			b++;
			if(b<10){
				printf("0");
			}
			printf("%d",b);
			
		}
		printf("\n");
	}
	return 0;
}
