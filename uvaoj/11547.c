/**
** 11547 - Automatic Answer
** Ahasanul Basher Hamza
** Date: 26/6/18
***/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int t;
        scanf("%d", &t);
        t = t * 567;
        t = t / 9;
        t = t + 7492;
        t = t * 235;
        t = t / 47;
        t = t - 498;
        t = t % 100;
        t = t / 10;
        if(t < 0)
        {
            t = -t;
            printf("%d\n",t % 10);
        }
        else
        {
            printf("%d\n",t%10);
        }

    }
    return 0;
}
