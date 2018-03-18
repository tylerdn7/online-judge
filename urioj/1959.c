/**
** 1959 - Regular Simple Polygons
** Ahasanul Basher Hamza
** Date: 5/24/16
***/

#include <stdio.h>
 
int main() 
{
    long long int i,n,m;
    long long k;
    scanf("%lld %lld", &n,&m);
    if((n < 3 || n > 1000000) && (m < 1 || m > 4000))
    {
        return 0;
    }
    k = n*m;
    printf("%lld\n",k);
    return 0;
}
