#include<stdio.h>
int main()
{
	int a,b=1;
	scanf("%d",&a);
	while(a>1){
		b++;
		a = a/2;
	}
	printf("%d",b);
	return 0;
}
