#include<stdio.h>

unsigned int akm(unsigned int a, unsigned int b){
	if(a == 0){
		return b+1;
	}
	else if(b==0){
		return akm(a-1,1);
	}
	else{
		return akm(a-1,akm(a,b-1));
	}
	
}

int main(){
	
	unsigned int m,n;
	
	scanf("%u %u",&m,&n);
	
	printf("%u",akm(m,n));
	
	return 0;
}
