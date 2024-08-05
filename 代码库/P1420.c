#include<stdio.h>

int main()
{
	
	int a,n,m = -1,x = 1,ans = 1;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		if(a == m+1)
		x++;
		else
		x = 1;
		if(x > ans){
			ans = x;
		}
		m  = a;
	}
	
	printf("%d",ans);
	
	return 0;
}
