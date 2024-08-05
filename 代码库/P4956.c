#include<stdio.h>

int main(){
	
	int a,x,k;
	
	scanf("%d",&a);
	
	for(int i=1;i<=100;i++){
		for(int j=100;j>=1;j--){
			if(i*7+j*21 == a/52){
				x = i;
				k = j;
			}
		}
	}
	
	printf("%d\n%d",x,k);

	return 0;

}
