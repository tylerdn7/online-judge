/**
** 1866 - Bill
** Ahasanul Basher Hamza
** Date: 5/22/16
***/

#include <stdio.h>
 
int main() 
{
    int j,i,n,s,k = 1,a;
    scanf("%d", &n);
    int td[n];
    for(i = 0;i < n;i++)
    {
        s = 0;
        scanf("%d", &a);
        int ara[a];
        for(j = 0;j < a;j+=2)
        {
            ara[j] = 1;
        }
        for(j = 1;j < a;j+=2)
        {
            ara[j] = -1;
        }
        for(j = 0;j < a;j++)
        {
            s += ara[j];
        }
        td[i] = s;
    }
    for(i = 0;i < n;i++)
    {
        printf("%d\n",td[i]);
    }

    return 0;
}
