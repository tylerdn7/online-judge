/**
** 1164 - Perfect Number
** Ahasanul Basher Hamza
** Date: 3/10/16
***/

#include <stdio.h>
 
int main() 
{
    int i,n,sum,j,d;
    scanf("%d", &d);
    if(d < 1 || d > 100)
    {
        return 0;
    }
    int s[d];
    for(j = 0;j < d;j++)
    {
        scanf("%d", &n);
        if(n < 1 || n > 100000000)
        {
            return 0;
        }
        s[j] = n;
    }
    for(j = 0;j  < d;j++)
    {
        sum = 0;
        for(i = 1;i < s[j];i++)
        {
            if(s[j] % i == 0)
            {
                sum = sum + i;
            }

        }
        if(sum == s[j])
        {
            printf("%d eh perfeito\n",s[j]);
        }
        else
        {
            printf("%d nao eh perfeito\n",s[j]);
        }
    }
    return 0;
}
