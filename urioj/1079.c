/**
** 1079 - Weighted Averages
** Ahasanul Basher Hamza
** Date: 5/22/16
***/

#include <stdio.h>
 
int main() 
{
    float a,b,c,media;
    int n,i;
    scanf("%d", &n);
    float ara[n];
    for(i = 0;i < n;i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        a = a * 2;
        b = b * 3;
        c = c * 5;
        media = (a + b + c) / (2+3+5);
        ara[i] = media;
    }
    for(i = 0;i < n;i++)
    {
        printf("%.1f\n",ara[i]);
    }
    return 0;
}
