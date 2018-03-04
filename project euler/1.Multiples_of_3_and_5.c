/**
** Multiples of 3 and 5
** Ahasanul Basher Hamza
** Date: 5/03/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,i;
    int sum = 0;
    for(i = 1;i < 1000;i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
