/**
** 1743 - Automated Checking Machine
** Ahasanul Basher Hamza
** Date: 6/6/16
***/

#include <stdio.h>
 
int main() 
{
    int i,j = 0;
    int ara[5];
    int tra[5];
    for(i = 0;i < 5;i++)
    {
        scanf("%d", &ara[i]);
        if(ara[i] < 0 || ara[i] > 1)
        {
            return 0;
        }

    }
    for(i = 0;i < 5;i++)
    {
        scanf("%d", &tra[i]);
        if(tra[i] < 0 || tra[i] > 1)
        {
            return 0;
        }

    }
    if(ara[0] == tra[0])
    {
        j++;
    }
    if(ara[1] == tra[1])
    {
        j++;
    }
    if(ara[2] == tra[2])
    {
        j++;
    }
    if(ara[3] == tra[3])
    {
        j++;
    }
    if(ara[4] == tra[4])
    {
        j++;
    }
    if(j == 0)
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}
