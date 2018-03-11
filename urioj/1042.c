/**
** 1042 - Simple Sort
** Ahasanul Basher Hamza
** Date: 5/20/16
***/

#include <stdio.h>
 
int main() 
{
    int r,b,c,i,j,swap,n = 3;
    int ara[n];
    scanf("%d %d %d",&r,&b,&c);
    ara[0] = r;
    ara[1] = b;
    ara[2] = c;
    int ae[3];
    for(i = 0;i < 3;i++)
    {
        ae[i] = ara[i];
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n-i-1;j++)
        {
            if(ara[j] > ara[j+1])
            {
                swap = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = swap;
            }
        }

    }
    for(i = 0;i < n;i++)
    {
        printf("%d\n",ara[i]);
    }
    printf("\n");
    for(i = 0;i < n;i++)
    {
        printf("%d\n",ae[i]);
    }
    return 0;
}
