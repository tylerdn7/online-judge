/**
** 1006 - Average 2
** Ahasanul Basher Hamza
** Date: 5/22/16
***/

#include <stdio.h>
 
int main() 
{
    double a,b,c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    double media;
    a = a * 2;
    b = b * 3;
    c = c * 5;
    media = (a + b + c) / (2+3+5);
    printf("MEDIA = %.1f\n",media);
    return 0;
}
