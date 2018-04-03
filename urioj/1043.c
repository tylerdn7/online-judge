/**
** 1043 - Triangle
** Ahasanul Basher Hamza
** Date: 6/4/16
***/

#include <stdio.h>
 
int main() 
{
    float a,b,c,perm,area,max,min,mid;
    scanf("%f %f %f", &a, &b, &c);
    if(a > c)
    {
        if(a > b)
        {
            max = a;
            min = c;
            mid = b;
        }
        else
        {
            max = b;
            min = c;
            mid = a;
        }
    }
    else
    {
        if(b > c)
        {
            max = b;
            min = a;
            mid = c;
        }
        else
        {
            max = c;
            mid = b;
            min = a;
        }
    }
    if((max) == (mid+min))
    {
        area = ((max+mid) / 2) * min;
        printf("Area = %.1f\n",area);
    }
    else
    {
        perm = max+mid+min;
        printf("Perimetro = %.1f\n",perm);
    }
    return 0;
}
