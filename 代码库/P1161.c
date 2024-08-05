#include<stdio.h>
#include<string.h>

#define MAX 2000000

int lit_total[MAX+1] = {0};

void ENSHEN(double a, int t)
{
    for (int i = 1; i <= t; i++)
    {
        int num = (int)(a * i);
        lit_total[num]++;
    }
}

int MIHOYO()
{
    int count = 0;
    for(int k = 1; k < MAX; k++)
    {
        count += lit_total[k];
        if (count % 2 == 1)
        {
            return k;
        }
    }
    return -1;
}
int main()
{
    int n, t;
    double a;

    scanf("%d",&n);

    while (n--)
    {
        scanf("%lf %d", &a, &t);
        ENSHEN(a, t);
    }

    int s = MIHOYO();
    printf("%d",s);

    return 0;
    
}