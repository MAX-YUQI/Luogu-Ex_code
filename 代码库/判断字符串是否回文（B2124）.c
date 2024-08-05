#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	int i;
	int j = strlen(a)-1;
	for(i=0;i<j;i++)
	{
		if(a[i] == a[j])
		{
			j--;
		}
		else
		break;
	}
	if(i>=j)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
