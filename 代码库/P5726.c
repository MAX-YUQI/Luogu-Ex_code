#include<stdio.h>
int main()
{
	int n;
	float x = 0;
	
	scanf("%d",&n);
	
	int a[n+1];
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n-1;i++){
		for(int  j=0;j<n-i-1;j++){
			if(a[j] > a[j+1]){
				int temp  = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				
			}
		}
	}
	
	for(int i=1;i<n-1;i++){
		x += a[i];
	}
	
	printf("%.2f",x/(n-2));
	
	return 0;
}
