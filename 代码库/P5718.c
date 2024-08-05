#include<stdio.h>
int main()
{
	int n;
	int a[101];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j =0;j<n-1-i;j++)
		{
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	printf("%d",a[0]);
	
	return 0;
}
