/**
** 1021 - Banknotes and Coins
** Ahasanul Basher Hamza
** Date: 5/28/16
***/

#include <stdio.h>
#include <math.h> 

int main() 
{
    int c,f;
    float n;
    scanf("%f", &n);
    c = 0;
    f = (int) round((n*100));
    printf("NOTAS:\n");
    while(f >= 10000)
    {
        f -= 10000;
        c++;

    }
    printf("%d nota(s) de R$ 100.00\n",c);
    c = 0;
    while(f >= 5000)
    {
        f -= 5000;
        c++;

    }
    printf("%d nota(s) de R$ 50.00\n",c);
    c = 0;
    while(f >= 2000)
    {
        f -= 2000;
        c++;

    }
    printf("%d nota(s) de R$ 20.00\n",c);
    c = 0;
    while(f >= 1000)
    {
        f -= 1000;
        c++;

    }
    printf("%d nota(s) de R$ 10.00\n",c);
    c = 0;
    while(f >= 500)
    {
        f -= 500;
        c++;

    }
    printf("%d nota(s) de R$ 5.00\n",c);
    c = 0;
    while(f >= 200)
    {
        f -= 200;
        c++;

    }
    printf("%d nota(s) de R$ 2.00\n",c);
    printf("MOEDAS:\n");
    c = 0;
    while(f >= 100)
    {
        f -= 100;
        c++;

    }
    printf("%d moeda(s) de R$ 1.00\n",c);
    c = 0;
    while(f >= 50)
    {
        f -= 50;
        c++;

    }
    printf("%d moeda(s) de R$ 0.50\n",c);
    c = 0;
    while(f >= 25)
    {
        f -= 25;
        c++;

    }
    printf("%d moeda(s) de R$ 0.25\n",c);
    c = 0;
    while(f >= 10)
    {
        f -= 10;
        c++;

    }
    printf("%d moeda(s) de R$ 0.10\n",c);
    c = 0;
    while(f >= 5)
    {
        f -= 5;
        c++;

    }
    printf("%d moeda(s) de R$ 0.05\n",c);
    c = 0;
    while(f >= 1)
    {
        f -= 1;
        c++;

    }
    printf("%d moeda(s) de R$ 0.01\n",c);
    return 0;
}
