/**
** 1589 - Bob Conduit
** Ahasanul Basher Hamza
** Date: 6/5/16
***/

#include <stdio.h>

int main() 
{
    int i,a,b,n;
    scanf("%d",&n);
    if(n > 10000)
    {
        return 0;
    }
    int ara[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d %d", &a,&b);
        ara[i] = a + b;
    }
    for(i = 0;i < n;i++)
    {
        printf("%d\n",ara[i]);
    }
    return 0;
}
