/**
** 2006 - Identifying Tea
** Ahasanul Basher Hamza
** Date: 5/22/16
***/

#include <stdio.h>
 
int main() 
{
    int j = 0,n,a,b,c,d,e;
    scanf("%d", &n);
    if(n < 1 || n  > 4)
    {
        return 0;
    }
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    if(a < 1 || a  > 4 || b < 1 || b  > 4 || c < 1 || c  > 4 || d < 1 || d  > 4 || e < 1 || e  > 4)
    {
        return 0;
    }
    if(a == n)
    {
        j++;
    }
    if(b == n)
    {
        j++;
    }
    if(c == n)
    {
        j++;
    }
    if(d == n)
    {
        j++;
    }
    if(e == n)
    {
        j++;
    }

    printf("%d\n",j);
    return 0;
}
