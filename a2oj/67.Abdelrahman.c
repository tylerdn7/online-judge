/**
** Abdelrahman
** Ahasanul Basher Hamza
** Date: 11/06/16
***/

#include <stdio.h>

int main()
{
    int i,n,a,b;
    scanf("%d", &n);
    int ara[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d %d",&a,&b);
        a = a - 1;
        b = b - a;
        ara[i] = b;
    }
    for(i = 0;i < n;i++)
    {
        printf("Case %d: %d\n",i+1,ara[i]);
    }

    return 0;
}
