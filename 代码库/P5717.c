#include<stdio.h>
#include<math.h>
int main()
{
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int s[4] = {0, a, b, c};
	int i,temp;
	for(i = 0; i < 3;i++)
	{
		if(s[i]>s[i+1]){
			temp = s[i];
			s[i] = s[i+1];
			s[i+1] = temp;
		}
	}
	if(s[1] + s[2] > s[3])
	{
		if(pow(s[1],2) + pow(s[2],2) == pow(s[3],2))
		printf("Right triangle\n");
		if(pow(s[1],2) + pow(s[2],2) > pow(s[3],2))
		printf("Acute triangle\n");
		if(pow(s[1],2) + pow(s[2],2) < pow(s[3],2))
		printf("Obtuse triangle\n");
		if(s[1] == s[2] || s[2] == s[3] || s[1] == s[3])
		printf("Isosceles triangle\n");
		if(s[1] == s[2] && s[2] == s[3] && s[1] == s[3])
		printf("Equilateral triangle\n");
	}
	else{
		printf("Not triangle\n");
	}
	
	
	return 0;
}
