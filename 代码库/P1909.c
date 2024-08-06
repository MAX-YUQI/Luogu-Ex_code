#include<stdio.h>  
#include<math.h> 
#include<limits.h> 
  
int main()  
{  
    int n;   
    int packages[3][2];   
    int total[3];  
    int min = INT_MAX; 
  
     
    scanf("%d", &n);  
  
      
    for(int i = 0; i < 3; i++)  
    {  
        scanf("%d %d", &packages[i][0], &packages[i][1]);  
    }  
  
     
    for(int i = 0; i < 3; i++)  
    {  
         
        int numPackages = ceil((double)n / packages[i][0]);  
          
        total[i] = numPackages * packages[i][1];  
         
        if(total[i] < min)  
        {  
            min = total[i];  
        }  
    }  
    
    printf("%d", min);  
  
    return 0;  
}
