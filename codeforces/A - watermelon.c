/**
** A - Watermelon
** Ahasanul Basher Hamza
** Date: 01/02/17
***/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n == 2)
    {
        printf("NO\n");
    }
    else if(n % 2 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
