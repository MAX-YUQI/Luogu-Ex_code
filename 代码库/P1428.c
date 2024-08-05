#include<stdio.h>

int main(){
	
	int a;
	
	scanf("%d",&a);
	
	int s[a+1],b[a+1];
	
	for(int i=0;i<a;i++){
		scanf("%d",&s[i]);
	}
	
	for(int i=a-1;i>=0;i--){
		b[i]=0;
		if(i==0){
			break;
		}
		for(int j=i-1;j>=0;j--){
			if(s[i] > s[j]){
				b[i]++;
			}
		}
	}
	
	for(int i=0;i<a;i++){
		printf("%d ",b[i]);
	}
	
	return 0;
}
