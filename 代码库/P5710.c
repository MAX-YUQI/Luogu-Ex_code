#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	double i,j;
	i = (a%2==0);
	j = (a>4&&a<=12);
	if(i && j)
		printf("1 ");
	else
		printf("0 ");
	if(i || j)
		printf("1 ");
	else
		printf("0 ");
	if((!i&&j) || (i&&!j))
		printf("1 ");
	else
		printf("0 ");
	if(!i && !j)
		printf("1");
	else
		printf("0");
	
	
	return 0;
}
