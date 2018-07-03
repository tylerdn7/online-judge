/**
** 10696 - f91
** Ahasanul Basher Hamza
** Date: 26/6/18
***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int f91(int n)
{
    if(n <= 100)
    {
        return f91(f91(n + 11));
    }
    else if(n > 100)
    {
        return n - 10;
    }
}

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        if(n == 0)
        {
            break;
        }
        printf("f91(%d) = %d\n",n,f91(n));
    }
    return 0;
}
