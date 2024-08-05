#include<stdio.h>
int main()
{
	int a,b,c,d,m,n;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	m = c - a;
	n = d - b;
	if(n<0)
	{
		m--;
		n+=60;
	}
	if(m<0){
		m+=24;
	}
	printf("%d %d",m,n);
	
	return 0;
}
