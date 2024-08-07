#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int scores[20];
    double average;
}Student;

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

void Average(Student *student, int m)
{
    qsort (student -> scores, m, sizeof(int), compare);

    int sum = 0;
    for(int i = 1; i < m - 1; i++)
    {
        sum += student -> scores[i];
    }

    student -> average = (double)sum / (m - 2);

}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    Student students[100];

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &students[i].scores[j]);
        }      
    }

    for (int i = 0; i < n; i++)
    {
        Average(&students[i], m);
    }

    double max;

    for(int i = 0; i < n; i++)
    {
        if(students[i].average > max)
        max = students[i].average;
    }

    printf("%.2f", max);

    return 0;
    
}