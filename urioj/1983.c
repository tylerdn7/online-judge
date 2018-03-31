/**
** 1983 - The Chosen
** Ahasanul Basher Hamza
** Date: 5/31/16
***/

#include <stdio.h>
 
int main() 
{
    int i,j,n,a,gmark,max;
    float b;
    scanf("%d", &n);

    int ara[n];
    int s[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d %f", &a, &b);

        ara[i] = a;
        s[i] = (int)(b*1000);
        max = 0;
        gmark = 0;
    }
    for(i = 0;i < n;i++)
    {
        if(s[i] > max)
        {
            max = s[i];
            gmark = i;
        }
    }
    if((max/1000) >= 8.0)
    {
        printf("%d\n",ara[gmark]);
    }
    else
    {
        printf("Minimum note not reached\n");
    }
    return 0;
}
