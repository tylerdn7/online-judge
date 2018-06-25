/**
** 11727 Cost Cutting
** Ahasanul Basher Hamza
** Date: 26/6/18
***/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int maxy(int ara[],int n)
{
    int i,max = 0;
    for(i = 0;i < n;i++)
    {
        if(ara[i] > max)
        {
            max = ara[i];
        }
    }
    return max;
}
int mini(int ara[],int n)
{
    int i,min = ara[0];
    for(i = 0;i < n;i++)
    {
        if(ara[i] < min)
        {
            min = ara[i];
        }
    }
    return min;
}
int main()
{
    int n,i;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        int ara[3];
        ara[0] = a;
        ara[1] = b;
        ara[2] = c;
        int max = maxy(ara,3);
        int min = mini(ara,3);
        if(a != max && a != min)
        {
            printf("Case %d: %d\n",i+1,a);
        }
        else if(b != max && b != min)
        {
            printf("Case %d: %d\n",i+1,b);
        }
        else if(c != max && c != min)
        {
            printf("Case %d: %d\n",i+1,c);
        }
    }
    return 0;
}
