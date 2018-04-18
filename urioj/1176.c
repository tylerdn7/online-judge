/**
** 1176 - Fibonacci Array
** Ahasanul Basher Hamza
** Date: 6/17/16
***/

#include <stdio.h>
 
int main() 
{
    int i,n,j,a;
    long long int fib[61];
    fib[0] = 0;
    fib[1] = 1;
    scanf("%d", &n);
    int s[n];
    for(i = 2;i < 61;i++)
    {
        fib[i] = fib[i-1]+fib[i-2];

    }
    for(i = 0;i < n;i++)
    {
        scanf("%d", &a);
        if(a < 0 || a > 60)
        {
            return 0;
        }
        s[i] = a;
    }
    for(i = 0;i < n;i++)
    {
        printf("Fib(%d) = %lld\n",s[i],fib[s[i]]);
    }
    return 0;
}
