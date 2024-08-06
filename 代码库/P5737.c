#include<stdio.h>

int main()
{
    int x, y;
    int ans[1500];
    int count = 0;

    scanf("%d %d", &x, &y);

    for(int i = x; i <= y; i++)
    {
        if((i % 4 == 0 && i % 100  != 0) || i % 400 == 0)
        {
            ans[count++] = i;
        }
    }

    printf("%d\n", count);

    for(int i=0; i<count; i++)
    {
        printf("%d ", ans[i]);
    }
}