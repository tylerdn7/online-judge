/**
** PRIME1 - Prime Generator
** Ahasanul Basher Hamza
** Date: 28/02/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

int is_prime(int n)
{
    if(n == 2)
    {
        return 1;
    }
    if(n < 2)
    {
        return 0;
    }
    if(n % 2 == 0)
    {
        return 0;
    }
    int i,root = sqrt(n);
    for(i = 3;i <= root;i+=2)
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
    int i,j,n;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int a,b,c = 0;
        scanf("%d %d", &a,&b);
        for(j = a;j <= b;j++)
        {
            if(is_prime(j) == 1)
            {
                printf("%d\n",j);
            }
        }
        printf("\n");
    }
    return 0;
}
