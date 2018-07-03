/**
** 10783 - Odd Sum
** Ahasanul Basher Hamza
** Date: 01/02/17
***/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int a,b,sum = 0;
        scanf("%d",&a);
        scanf("%d",&b);
        int j;
        for(j = a;j <= b;j++)
        {
            if(j % 2 != 0)
            {
                sum += j;
            }
        }
        printf("Case %d: %d\n",i+1, sum);
    }
    return 0;
}
