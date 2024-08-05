#include<stdio.h>
int main()
{
	char a[14],b[12]="0123456789X";
	int n=1,t=0;
	
	scanf("%s",a);
	
	for(int i=0;i<12;i++)
	{
		if(a[i] == '-'){
			continue;
		}
		else{
			t += (a[i]-'0')*n++;
		}
	}
	if(b[t%11] == a[12]){
		printf("Right");
	}
	else{
		a[12] = b[t%11];
		printf("%s",a);
	}	
	
	
	return 0;
}
