/**
** Add Two numbers
** Ahasanul Basher Hamza
** Date: 29/05/16
***/

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a < 1 || a > 1000 || b < 1 || b > 9)
    {
        return 0;
    }
    printf("%d\n",a+b);
    return 0;
}
