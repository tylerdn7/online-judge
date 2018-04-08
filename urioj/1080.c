/**
** 1080 - Highest and Position
** Ahasanul Basher Hamza
** Date: 6/11/16
***/

#include <stdio.h>
 
int main() 
{
    int ara[100];
    int i,pos,max = 0;
    for(i = 0;i < 100;i++)
    {
        scanf("%d", &ara[i]);
    }

    for(i = 0;i < 100;i++)
    {
        if(ara[i] > max)
        {
            max = ara[i];
            pos = i+1;
        }
    }
    printf("%d\n%d\n",max,pos);
    return 0;
}
