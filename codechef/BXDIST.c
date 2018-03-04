/**
** Box Distribution
** Ahasanul Basher Hamza
** Date: 3/4/18
***/
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>
 
int main()
{
    int n,i,j;
    scanf("%d", &n);
    while(n--)
    {
        long long int t;
        scanf("%lld", &t);
        long long int sum =  t *(t+1) / 2;
        printf("%lld\n",sum);
    }
    return 0;
}
