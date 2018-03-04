/**
** Ahmed Aly
** Ahasanul Basher Hamza
** Date: 31/05/16
***/


#include <stdio.h>
int main()
{
    int i,sum,sub,a,b,d,c,n;
    char sign,equal;
    scanf("%d", &n);
    if(n < 1 || n > 100)
    {
        return 0;
    }
    int ara[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d %c %d %c %d", &a,&sign,&b,&equal,&d);
        if(a < 1 || b < 1 || d < 1 || a > 100 || b > 100 || d > 100)
        {
            return 0;
        }
        if(sign == '+')
        {
            sum = a + b;
            if(a + b != d)
            {
                c = -1;
            }
            else
            {
                c = 1;
            }
        }
        if(sign == '-')
        {
            if(a < b)
            {
                sub = b - a;
            }
            else
            {
                sub = a - b;
            }
            if((a > b && a - b != d) || (a < b && b- a!= d))
            {
                c = -1;
            }
            else
            {
                c = 1;
            }
        }
        ara[i] = c;
    }
    for(i = 0;i < n;i++)
    {

            if(ara[i] == 1)
            {
                printf("Case %d: YES\n",i+1);
            }
            else if(ara[i] = -1)
            {
                printf("Case %d: NO\n",i+1);
            }


    }
    //printf("Case %d: YES\n",i+1);
    //printf("Case %d: NO\n",i);
    return 0;
}
