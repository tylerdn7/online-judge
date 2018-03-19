/**
** Count Divisors
** Ahasanul Basher Hamza
** Date: 9/18/16
***/

#include <stdio.h>

int main()
{
    int i,n,a,b,c,d = 0;
    scanf("%d %d %d", &a, &b, &c);
    for(i = a;i <=b;i++)
    {
        if(i % c == 0)
        {
            d++;
        }
    }
    printf("%d\n",d);
    return 0;
}
