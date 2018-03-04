/**
** Mr. Zuckerberg's Age Game
** Ahasanul Basher Hamza
** Date: 5/03/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

int is_prime(int n)
{
    int i;
    if(n == 2)
    {
        return 1;
    }
    for(i = 2;i < n;i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i,n,j;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int t;
        scanf("%d",&t);
        if(is_prime(t) == 1)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
