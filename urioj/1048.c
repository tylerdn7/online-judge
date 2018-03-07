/**
** 1048 - Salary Increase
** Ahasanul Basher Hamza
** Date: 3/8/16
***/

#include <stdio.h>
 
int main() 
{
    double x,y;
    scanf("%lf",&x);
    if(x >= 0 && x <= 400.00)
    {
        y = x + x*.15;
       printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 15 %%\n",y,x*0.15);
    }
    else if(x >= 400.01 &&x <= 800.00)
    {
        y = x + x*.12;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 12 %%\n",y,x*0.12);
    }
    else if(x >= 800.01 && x <= 1200.00)
    {
        y = x + x*.10;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 10 %%\n",y,x*0.10);
    }
    else if(x >= 1200.01 && x <= 2000.00)
    {
        y = x + x*.07;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 7 %%\n",y,x*0.07);
    }
    else if(x > 2000.00)
    {
        y = x + x*.04;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 4 %%\n",y,x*0.04);
    }

    return 0;
}
