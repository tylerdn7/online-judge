/**
** 1158 - Sum of Consecutive Odd Numbers III
** Ahasanul Basher Hamza
** Date: 5/21/16
***/

#include <stdio.h>
 
int main()
{
    int i,j,a,b,n,k,sum;
    scanf("%d", &n);
    int acm[n];
    for(i = 0;i < n;i++)
    {
        sum = 0;
        scanf("%d %d", &a, &b);
        for(k = 0,j = a;k < b;j++)
        {
            if(j % 2 != 0)
            {
                sum = sum + j;
                k++;
            }
        }
        acm[i] = sum;
    }
    for(i = 0;i < n;i++)
    {
        printf("%d\n",acm[i]);
    }

    return 0;
}
