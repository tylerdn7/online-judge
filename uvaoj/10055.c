/**
** 10055 - Hashmat the Brave Warrior
** Ahasanul Basher Hamza
** Date: 01/02/17
***/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <strings.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a > b)
        {
            printf("%lld\n",a-b);
        }
        else if(a < b)
        {
            printf("%lld\n",b-a);
        }
        else
        {
            printf("%lld\n",b-a);
        }
    }
    return 0;
}
