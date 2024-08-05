#include<stdio.h>
int main()
{
	int n,k,a=0,b=0;
	long int sum1=0,sum2=0;
	double i,j;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		if(i%k == 0){
			sum1 += i;
			a++;
		}
		if(i%k != 0){
			sum2 += i;
			b++;
		}
	}
	
	i = (double)sum1/a;
	j = (double)sum2/b;
	
	printf("%.1f %.1f",i,j);
	
	
	return 0;
}
