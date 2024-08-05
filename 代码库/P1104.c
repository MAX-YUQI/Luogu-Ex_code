#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char name[30];
	int year;
	int month;
	int day;
}Student;


int main()
{
	int n;
	scanf("%d",&n);
	
	Student students[n];
	
	for(int i=0;i<n;i++){
		scanf("%s %d %d %d",students[i].name,&students[i].year,&students[i].month,&students[i].day);
		
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(students[j].year > students[j+1].year || (students[j].year == students[j+1].year && students[j].month > students[j+1].month) || (students[j].year == students[j+1].year && students[j].month == students[j+1].month && students[j].day > students[j+1].day))
			{
				Student temp = students[j];
				students[j] = students[j+1];
				students[j+1] = temp;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%s\n",students[i].name);
	}
	
	return 0;
}
