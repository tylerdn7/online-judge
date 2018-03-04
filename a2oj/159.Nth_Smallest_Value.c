/**
** Nth Smallest Value
** Ahasanul Basher Hamza
** Date: 3/07/18
***/


#include <stdio.h>
int main()
{
    int i,j,n,k,swap;
    scanf("%d", &n);
    int ara[n];
    for(i = 0;i < n;i++)
    {
        int s[10];
        for(j = 0;j < 10;j++)
        {
            scanf("%d", &s[j]);
        }
        for(k = 0;k < 10;k++)
        {
            for(j = 0;j < 9;j++)
            {
                if(s[j] > s[j+1])
                {
                    swap = s[j];
                    s[j] = s[j+1];
                    s[j+1] = swap;
                }
            }
        }
        ara[i] = s[1];
    }
    for(i = 0;i < n;i++)
    {
        printf("%d\n",ara[i]);
    }
    return 0;
}
