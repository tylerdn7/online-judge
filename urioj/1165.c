/**
** 1165 - Prime Number
** Ahasanul Basher Hamza
** Date: 5/27/16
***/

#include <stdio.h>
 
int main() 
{
    int i,n,c,a,j;
    scanf("%d", &n);
    if(n < 1 || n > 100)
    {
        return 0;
    }
    int ara[n];
    int y[n];
    for(i = 0;i < n;i++)
    {
        c = 0;
        scanf("%d", &a);
        if(a < 1 || n > 10000000)
        {
            return 0;
        }
        y[i] = a;
        if(a % 2 == 0)
        {
            ara[i] = c+10;
        }
        for(j = 2;j < a;j++)
        {
            if(a % j == 0)
            {
                c++;

            }

        }
        ara[i] = c;
    }
    for(i = 0;i < n;i++)
    {
        if(ara[i] == 0)
        {
            printf("%d eh primo\n",y[i]);
        }
        if(ara[i] > 0)
        {
            printf("%d nao eh primo\n",y[i]);
        }
    }
    return 0;
}
