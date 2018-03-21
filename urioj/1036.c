/**
** 1036 - Bhaskara's Formula
** Ahasanul Basher Hamza
** Date: 5/27/16
***/

#include <stdio.h>
#include <math.h> 

int main() 
{
    float a,b,c,x1,x2;
    scanf("%f %f %f", &a, &b, &c);
    if(a <= 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        x1 = (-b + sqrt(pow(b,2) - 4 * a * c)) / (2 * (a));
        x2 = (-b - sqrt(pow(b,2) - 4 * a * c)) / (2 * (a));
        if((pow(b,2)) <=  (4 * a * c))
        {
            printf("Impossivel calcular\n");
        }
        else if((pow(b,2) - (4*a*c) <= 0))
        {
            printf("Impossivel calcular\n");
        }
        else
        {
            printf("R1 = %0.5f\nR2 = %0.5f\n",x1,x2);
        }

    }
    return 0;
}
