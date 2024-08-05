//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a,b,c,m,n;
//	int s[3];
//	scanf("%d",&a);
//	for(int i = 0;i < 3;i++)
//	{
//		scanf("%d %d",&b,&c);
//		m = ceil(a/b);
//		n = m * c;
//		s[i] = n;
//	}
//	int min = s[0];
//	for(int j = 1;j < 3;j++)
//	{
//		if(s[j] < s[0]){
//			min = s[j];
//		}
//	}
//	printf("%d",min);
//		
//	return 0;
//}

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
