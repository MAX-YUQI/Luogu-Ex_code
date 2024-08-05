#include<stdio.h>
int main()
{
	int y,m,a,b,c;
	int s[13] = {31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d",&y,&m);
	a = (y % 4 == 0);
	b = (y % 100 == 0);
	c = (y % 400 == 0);
	if((a && !b) || c){
		s[1] = 29;
		printf("%d",s[m-1]);
	}
	else
	{
		printf("%d",s[m-1]);
	}
	
	return 0;
}
