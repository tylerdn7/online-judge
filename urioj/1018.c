/**
** 1018 - Banknotes
** Ahasanul Basher Hamza
** Date: 5/28/16
***/

#include <stdio.h>
 
int main() 
{
    int n,c;
    scanf("%d", &n);
    c = 0;
    printf("%d\n",n);
    while(n >= 100)
    {
        n -= 100;
        c++;

    }
    printf("%d nota(s) de R$ 100,00\n",c);
    c = 0;
    while(n >= 50)
    {
        n -= 50;
        c++;

    }
    printf("%d nota(s) de R$ 50,00\n",c);
    c = 0;
    while(n >= 20)
    {
        n -= 20;
        c++;

    }
    printf("%d nota(s) de R$ 20,00\n",c);
    c = 0;
    while(n >= 10)
    {
        n -= 10;
        c++;

    }
    printf("%d nota(s) de R$ 10,00\n",c);
    c = 0;
    while(n >= 5)
    {
        n -= 5;
        c++;

    }
    printf("%d nota(s) de R$ 5,00\n",c);
    c = 0;
    while(n >= 2)
    {
        n -= 2;
        c++;

    }
    printf("%d nota(s) de R$ 2,00\n",c);
    c = 0;
    while(n >= 1)
    {
        n -= 1;
        c++;

    }
    printf("%d nota(s) de R$ 1,00\n",c);
    return 0;
}
