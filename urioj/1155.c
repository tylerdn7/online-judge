/**
** 1155 - S Sequence
** Ahasanul Basher Hamza
** Date: 5/28/16
***/

#include <stdio.h>
 
int main() 
{
    float d = 1;
    float i;
    for(i = 2.00;i <= 100;i++)
    {
        if(i == 2.00)
        {
            d = 1 + 1/i;
        }
        else
        {
            d = d + 1/i;
        }

    }
    printf("%.2f\n",d);
    return 0;
}
