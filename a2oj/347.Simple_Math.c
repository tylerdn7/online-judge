/**
** Simple Math
** Ahasanul Basher Hamza
** Date: 5/29/16
***/

#include <stdio.h>
#include <math.h>
int main()
{
    float x,b,a,c;
    scanf("%f %f %f", &a,&b,&c);
    x = (-b + sqrt(pow(b,2) - 4 * a * c)) / (2 * (a));
    printf("%f\n",x);
return 0;
}
