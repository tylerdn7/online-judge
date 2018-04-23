/**
** 2060 - Bino's Challenge
** Ahasanul Basher Hamza
** Date: 6/17/16
***/

#include <stdio.h>
 
int main() 
{
    int n,tw = 0,th = 0,fr = 0,fv = 0,i;
    scanf("%d", &n);
    int ara[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i = 0;i < n;i++)
    {
        if(ara[i] % 2 == 0)
        {
            tw++;
        }
        if(ara[i] % 3 == 0)
        {
            th++;
        }
        if(ara[i] % 4 == 0)
        {
            fr++;
        }
        if(ara[i] % 5 == 0)
        {
            fv++;
        }
    }
    printf("%d Multiplo(s) de 2\n",tw);
    printf("%d Multiplo(s) de 3\n",th);
    printf("%d Multiplo(s) de 4\n",fr);
    printf("%d Multiplo(s) de 5\n",fv);
    return 0;
}
