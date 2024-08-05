#include<stdio.h>

int main()
{
	int money=0,cost,mama=0,flag=1,death_momth;
	
	for(int i=1;i<=12;i++){
		
		money += 300;
		scanf("%d",&cost);
		money -= cost;
		if(money < 0){
			flag = 0;
			death_momth = i;
			break;
		}
		mama += money/100;
		money %= 100;	
	}
	
	if(flag == 1){
		money += mama*120;
		printf("%d",money);
	}
	else{
		printf("%d",-death_momth);
	}
	
	return 0;
}
