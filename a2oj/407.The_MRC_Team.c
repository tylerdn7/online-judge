/**
** The MRC Team
** Ahasanul Basher Hamza
** Date: 4/03/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int i,n,j;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int t;
        scanf("%d", &t);
        int count = 0;
        while(t != 0)
        {
            int k = t % 10;
            count++;
            t /= 10;
        }
        printf("%d\n",count);
    }

    return 0;
}
