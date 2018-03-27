/**
** 1156 - S Sequence II
** Ahasanul Basher Hamza
** Date: 5/28/16
***/

#include <stdio.h>
 
int main() 
{
    float d = 1,j;
    float i;
    for(i = 2.00,j = 3.00;i <= 524288;i*=2,j+=2)
    {
        if(i == 2.00)
        {
            d = 1 + j/i;
        }
        else
        {
            d = d + j/i;
        }

    }
    printf("%.2f\n",d);

    return 0;
}
