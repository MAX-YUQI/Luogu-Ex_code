#include<stdio.h>

#define A 1001

int main(){
	
	int n;
	int win[A],count[A]={0};
	
	scanf("%d",&n);
	
	int buy[n][A];
	
	for(int i=0;i<7;i++){
		scanf("%d",&win[i]);
	}
	
	for(int i=0;i<n;i++){
		int num=0;

		for(int j=0;j<7;j++){
			scanf("%d",&buy[i][j]);
		}
		for(int y=0;y<7;y++){
			for(int m=0;m<7;m++){
				if(win[y] == buy[i][m]){
					num++;
				}
			}
		}
		switch (num) {
			case 1:
				count[6]++;
				break;
			case 2:
				count[5]++;
				break;
			case 3:
				count[4]++;
				break;
			case 4:
				count[3]++;
				break;
			case 5:
				count[2]++;
				break;
			case 6:
				count[1]++;
				break;
			case 7:
				count[0]++;
				break;
			default:
				break;
		}
	}
	
	
	for(int i=0;i<7;i++){
		printf("%d ",count[i]);
	}
	return 0;
}
