/**
** Sum of Digits
** Ahasanul Basher Hamza
** Date: 5/3/16
***/

#include <stdio.h>
int main()
{
    int i,j,n,l,sum;
    scanf("%d", &n);
    int u[n];
    for(i = 0;i < n;i++)
    {
        sum  = 0;
        scanf("%d", &j);
        while(j != 0)
        {
            l =  j % 10;
            j = j / 10;
            sum = sum + l;
        }
        u[i] = sum;
    }
    for(i = 0;i < n;i++)
    {
        printf("%d\n",u[i]);
    }
 
    return 0;
}
