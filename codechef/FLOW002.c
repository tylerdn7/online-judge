/**
** FLOW002
** Ahasanul Basher Hamza
** Date: 3/5/16
***/

#include <stdio.h>
int main(void)
{
    int i,n,a,b;
    scanf("%d", &n);
    int k[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d %d",&a,&b);
        k[i] = a % b;
    }
    for(i = 0;i < n;i++)
    {
        printf("%d\n",k[i]);
    }
    return 0;
} 
