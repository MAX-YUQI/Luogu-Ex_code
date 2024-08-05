#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char str[51];

    scanf("%d", &n);
    scanf("%s", str);
    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = 'a' + (str[i] - 'a' + n) % 26;
        }
    }

    printf("%s", str);

    return 0;
}