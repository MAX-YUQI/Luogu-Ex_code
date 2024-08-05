#include<stdio.h>
int main()
{
	int a[3];
	for(int i=0;i<3;i++){
		scanf("%d ",&a[i]);
	}
	for(int i=0; i<2; i++){  
        for(int j=0; j<2-i; j++){   
            if(a[j] > a[j+1]){   
                int temp = a[j];  
                a[j] = a[j+1];  
                a[j+1] = temp;  
            }  
        }  
    }
	char d,b,c;
	scanf("%c%c%c",&d,&b,&c);
	int i=d-'A',j=b-'A',k=c-'A'; 
	
	printf("%d %d %d",a[i],a[j],a[k]);
	
	return 0;
}
