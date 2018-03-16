/**
** 1044 - Multiples
** Ahasanul Basher Hamza
** Date: 5/21/16
***/

#include <stdio.h>
 
int main()
{
    int i,j,a,b;
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        if(a % b == 0)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }
    if(a < b)
    {
        if(b % a == 0)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }
    if(a == b)
    {
        if(a % b == 0)
        {
            printf("Sao Multiplos\n");
        }
        else if(b % a == 0)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }
    return 0;
}
