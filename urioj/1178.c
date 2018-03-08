/**
** 1178 - Array Fill III
** Ahasanul Basher Hamza
** Date: 5/17/16
***/

#include <stdio.h>
 
int main() 
{
    double n;
    scanf("%lf", &n);
    double ara[100];
    int i;
    ara[0] = n;
    for(i = 1;i < 100;i++)
    {
        ara[i] = n/=2;
    }
    for(i = 0;i < 100; i++)
    {
        printf("N[%d] = %0.4lf\n",i,ara[i]);
    }
    return 0;
}
