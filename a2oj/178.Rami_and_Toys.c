/**
** Rami and Toys
** Ahasanul Basher Hamza
** Date: 12/05/18
***/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <strings.h>
int max(int ara[],int n)
{
    int maxi = 0;
    int i;
    for(i = 0;i < n;i++)
    {
        if(ara[i] > maxi)
        {
            maxi = ara[i];
        }
    }
    return maxi;
}

int main()
{
    int i,j,n,t;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&t);
        int ara[t];
        for(j = 0;j < t;j++)
        {
            scanf("%d", &ara[j]);
        }
        int result = max(ara,t);
        printf("%d\n",result);
    }
    return 0;
}
