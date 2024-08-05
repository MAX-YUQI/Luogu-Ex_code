#include<stdio.h>
#include<math.h>

int main()
{
	
	int a[1001][4];
	int n;
	
	scanf("%d",&n);
	
	
	
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
	}
	
	int count=0;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int x = abs(a[i][0] - a[j][0]);
			int y = abs(a[i][1] - a[j][1]);
			int z = abs(a[i][2] - a[j][2]);
			
			int total =  abs(a[i][0] - a[j][0]+a[i][1] - a[j][1]+a[i][2] - a[j][2]);
			
			if(x<=5 && y<=5 && z<=5 && total <=10 ){
				count++;
			}
		}
	}
	
	
	printf("%d",count);
	

	return 0;
}
