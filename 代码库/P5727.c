#include<stdio.h>

int main(){
	
	int a[1001];
	int n,m=0,k=1;
	
	scanf("%d",&n);
	
	a[0] = n;
	
	m = n;
	
	while(m != 1){
		
		if(m%2 == 0){
			m /= 2;
			a[k] = m;
		}
		else{
			m = m*3+1;
			a[k] = m;
		}
		k++;
	}
	
	for(int i=k-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	return 0;
}
