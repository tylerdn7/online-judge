/**
** 1134 - Type of Fuel
** Ahasanul Basher Hamza
** Date: 5/21/16
***/

#include <stdio.h>
 
int main() 
{
    int n,a = 0,b = 0,c = 0;
    while(n != 4)
    {
        scanf("%d",&n);
        if(n == 1)
        {
            a++;
        }
        else if(n == 2)
        {
            b++;
        }
        else if(n == 3)
        {
            c++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",b);
    printf("Diesel: %d\n",c);
    return 0;
}
