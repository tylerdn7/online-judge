/**
** 1585 - Making Kites
** Ahasanul Basher Hamza
** Date: 6/3/16
***/

#include <stdio.h>
 
int main() 
{
    int i,n,a,b;
    scanf("%d", &n);
    int ara[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d %d", &a, &b);
        if(a < 10 || a > 100 || b < 10 || b > 100)
        {
            return 0;
        }

        ara[i] = (a * b) / 2;
    }
    for(i = 0;i < n;i++)
    {
        printf("%d cm2\n",ara[i]);
    }
    return 0;
}
