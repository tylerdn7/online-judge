/**
** 1023
** Ahasanul Basher Hamza
** Date: 26/03/18
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
    int i;
    double sum = 0;
    for(i = 0;i < 12;i++)
    {
        double t;
        scanf("%lf", &t);
        sum += t;
    }
    printf("$%.2lf\n",sum / 12.00);
    return 0;
}
