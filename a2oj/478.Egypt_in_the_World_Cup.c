/**
** Egypt in the World Cup
** Ahasanul Basher Hamza
** Date: 5/03/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

struct world_cup
{
    char team[20];
    int points;
};

int main()
{
    int i,n,j;
    scanf("%d", &n);
    struct world_cup wc[n];
    for(i = 0;i < n;i++)
    {
        int t;
        scanf("%d", &t);
        for(j = 0;j < t;j++)
        {
            scanf("%s %d",wc[j].team,&wc[j].points);
        }
        int i,max = 0,index = 0;
        for(j = 0;j < t;j++)
        {
            if(wc[j].points >= max)
            {
                max = wc[j].points;
                index = j;
            }
        }
        printf("%s\n",wc[index].team);
    }
    return 0;
}
