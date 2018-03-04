/**
** Pizzas
** Ahasanul Basher Hamza
** Date: 28/06/18
***/

#include <stdio.h>
int main()
{
    int i,n,a,j,sum;
    scanf("%d", &n);
    int ara[n];
    for(i = 0;i < n;i++)
    {
        sum = 0;
        scanf("%d", &a);
        int s[a];
        for(j = 0;j < a;j++)
        {
            scanf("%d", &s[j]);
            sum = sum + s[j];
        }
        ara[i] = sum;
    }
    for(i = 0;i < n;i++)
    {
        printf("Case %d: %d\n",i+1,ara[i]);
    }
    return 0;
}
