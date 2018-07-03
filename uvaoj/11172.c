/**
** 11172 - Relational Operator
** Ahasanul Basher Hamza
** Date: 01/02/17
***/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int a,b;
        scanf("%d %d",&a, &b);
        if(a == b)
        {
            printf("=\n");
        }
        else if(a < b)
        {
            printf("<\n");
        }
        else
        {
            printf(">\n");
        }
    }
    return 0;
}
