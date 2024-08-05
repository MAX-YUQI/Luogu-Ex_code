#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	scanf("%s",&a);
	scanf("%s",&b);
	if(strstr(b,a))
	{
		printf("%s is substring of %s",a,b);
	}
	else if(strstr(a,b))
	{
		printf("%s is substring of %s",b,a);
	}
	else
	{
		printf("No substring");
	}
	
	return 0;
 } 
