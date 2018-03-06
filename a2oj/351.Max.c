/**
** Max
** Ahasanul Basher Hamza
** Date: 5/29/16
***/

#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a > c)
    {
        if(a > b)
        {
            printf("%d\n",a);
        }
        else
        {
            printf("%d\n",b);
        }
    }
    else
    {
        if(b > c)
        {
            printf("%d\n",b);
        }
        else
        {
            printf("%d\n",c);
        }
    }
return 0;
}
