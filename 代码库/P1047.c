#include<stdio.h>

#define MAX 10001

int main(){
	
	int l,m,u,v;
	int tree[MAX] = {0};
	int count = 0;
	
	scanf("%d %d",&l,&m);
	
	for(int i=0;i<m;i++){
		scanf("%d %d",&u,&v);
		for(int j=u;j<=v;j++){
			tree[j] = 1;
		}
	}
	
	for(int i=0;i<=l;i++){
		if(tree[i] == 0){
			count++;
		}
	}
	
	printf("%d",count);
	return 0;
}
