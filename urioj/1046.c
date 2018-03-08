/**
** 1046 - Game Time
** Ahasanul Basher Hamza
** Date: 5/17/16
***/

#include <stdio.h>
 
int main() 
{
    int a,b,c;
    scanf("%d %d", &a,&b);
    if(a > b)
    {
        a = a % 12;
        b = b + 12;
        c = b - a;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
    else if(a == b)
    {
        c = 24;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
    else if(a < b)
    {
        a = a;
        b = b;
        c = b - a;;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
    return 0;
}
