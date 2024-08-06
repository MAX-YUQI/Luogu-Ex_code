#include<stdio.h> 
int main() 
{  
    int i,a[1005]={0},b[1005]={0},n,j;
    scanf("%d",&n);
  
    a[0] = b[0] = 1;
  
    for(i=2;i<=n;i++){ 
        for(j=0;j<100;j++)
            b[j] *= i;  
  
        for(j=0;j<100;j++){  
            if(b[j]>9){  
                b[j+1] += b[j]/10;
                b[j] %= 10;
            }  
        }  
  
        for(j=0;j<100;j++){  
            a[j] += b[j];  
            if(a[j]>9) 
            {  
                a[j+1] += a[j]/10;  
                a[j] %= 10;  
            }  
        }  
    }  

    for(i=100;i>=0&&a[i]==0;i--);
    for(j=i;j>=0;j--){   
        printf("%d",a[j]);  
    }  
  
    return 0; 
}
