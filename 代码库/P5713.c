#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	b = a * 5;
	c = a * 3 + 11;
	if(b<c)
	printf("Local");
	else
	printf("Luogu");
	
	return 0;
}
