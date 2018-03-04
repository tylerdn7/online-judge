/**
** Omar
** Ahasanul Basher Hamza
** Date: 29/05/16
***/

#include <stdio.h>
int main(void)
{
    int t,a,b,i;
    scanf("%d", &t);
    if(t < 1 || t > 100)
    {
        return 0;
    }
    int ara[t];
    for(i = 0;i < t;i++)
    {
        scanf("%d %d", &a, &b);
        if(a < 1 || a > 100 || b < 1 || b > 100)
        {
            return 0;
        }
        ara[i] = a+b;
    }
    for(i = 0;i < t;i++)
    {
        printf("%d\n",ara[i]);
    }
return 0;
}
