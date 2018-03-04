/**
** Add Two Numbers 
** Ahasanul Basher Hamza
** Date: 3/4/16
***/

#include <stdio.h>
int main()
{
    int i,j,n,k;
    do
    {
        scanf("%d", &n);
    }
    while(n < 1 || n > 1000);
    int a[n];
    for(k = 0;k < n;k++)
    {
        do
        {
            scanf("%d %d", &i,&j);
        }
        while(i < 1 || i > 10000 && j < 1 || j > 10000);
        a[k] = i + j;
    }
    for(k = 0;k < n;k++)
    {
        printf("%d\n",a[k]);
    }
    return 0;
} 
