#include<stdio.h>
#include<math.h>
int main()
{
	int m,t,s;
	scanf("%d %d %d",&m,&t,&s);
	if(t == 0)
	{
		printf("0");
	}
	else
	{
		if(s%t == 0)
		{
			printf("%d",m-(s/t));
		}
		else{
			printf("%d",m-(int)ceil(s/t));
		}
		
	}
	
	return 0;
}

//#include<stdio.h>
//int main()
//{
//    int m,t,s;
//    scanf("%d %d %d",&m,&t,&s);
//    if(t==0)
//        printf("0");
//    else if((m-(s/t)<=0)&&(t!=0))
//        printf("0");
//    else if((m>(s/t))&&t!=0)
//    {
//     if(s%t==0)
//        printf("%d",m-(s/t));
//    else if(s%t!=0)
//        printf("%d",m-(s/t)-1);
//    }
//    return 0;
//}
