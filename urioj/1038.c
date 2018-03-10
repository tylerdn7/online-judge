/**
** 1038 - Snack
** Ahasanul Basher Hamza
** Date: 5/18/16
***/

#include <stdio.h>
 
int main() 
{
    int a,b;
    float f;
    scanf("%d %d", &a,&b);
    if(a == 1)
    {
        f = (float) b * 4.00;
    }
    else if(a == 2)
    {
        f = (float) b * 4.50;
    }
    else if(a == 3)
    {
        f = (float) b * 5.00;
    }
    else if(a == 4)
    {
        f = (float) b * 2.00;
    }
    else if(a == 5)
    {
        f = (float) b * 1.50;
    }

    printf("Total: R$ %.2f\n",f);
    
    return 0;
}
