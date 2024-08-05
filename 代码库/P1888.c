#include<stdio.h>

int GCD(int m,int n)
{
	if(n==0)
	return m;
	return GCD(n,m%n);
}

int main()
{
	int a,b,c,m,n;
	scanf("%d %d %d",&a,&b,&c);
	
	int s[4] = {0,a,b,c};
	
	for(int i=1;i<3;i++)
	{
		int temp;
		if(s[i]>s[i+1])
		{
			temp = s[i];
			s[i] = s[i+1];
			s[i+1] = temp;
		}
	}
	
	m = s[1]/GCD(s[1],s[3]);
	n = s[3]/GCD(s[1],s[3]);
	
	printf("%d/%d",m,n);
	
	return 0;
}
