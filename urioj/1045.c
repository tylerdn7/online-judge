/**
** 1045 - Triangle Types
** Ahasanul Basher Hamza
** Date: 6/2/16
***/

#include <stdio.h>
 
int main() 
{
    float a,b,c,max,min,mid;
    int d = 0;
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
            mid = c;
            min = a;
        }
        else
        {
            max = c;
            mid = b;
            min = a;
        }
    }


    if(max >= (min + mid))
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if((max*max) == (min*min) + (mid*mid))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if((max*max) > (min*min) + (mid*mid))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((max*max) < (min*min) + (mid*mid))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(max == mid && mid == min && min == max)
    {
        d++;
        printf("TRIANGULO EQUILATERO\n");
    }
    if((min == mid) || (max == mid) || (max == min))
    {
        if(d == 0)
        {
            printf("TRIANGULO ISOSCELES\n");
        }

    }
    return 0;
}
