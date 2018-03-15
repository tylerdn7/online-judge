/**
** 1174 - Array Selection I
** Ahasanul Basher Hamza
** Date: 5/21/16
***/

#include <stdio.h>
 
int main() 
{
    int i;
    float a;
    float ara[100];
    for(i = 0;i < 100;i++)
    {
        scanf("%f", &a);
        ara[i] = a;
    }
    for(i = 0;i < 100;i++)
    {
        if(ara[i] <= 10.0)
        {
            printf("A[%d] = %.1f\n",i,ara[i]);
        }
    }
    return 0;
}
