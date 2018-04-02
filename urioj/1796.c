/**
** 1796 - Brazilian Economy
** Ahasanul Basher Hamza
** Date: 6/2/16
***/

#include <stdio.h>
 
int main()
{
    int i,n,c = 0,d = 0;
    scanf("%d", &n);
    if(n < 4 || n > 233000)
    {
        return 0;
    }
    int ara[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d", &ara[i]);
        if(ara[i] < 0 || ara[i] > 1)
        {
            return 0;
        }
        if(ara[i] == 0)
        {
            c++;
        }
        else if(ara[i] == 1)
        {
            d++;
        }
    }
    if(c > d)
    {
        printf("Y\n");
    }
    else if(c <= d)
    {
        printf("N\n");
    }
    return 0;
}
