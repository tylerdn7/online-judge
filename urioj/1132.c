/**
** 1132 - Multiples of 13
** Ahasanul Basher Hamza
** Date: 3/8/16
***/

#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i,j,sum = 0,a;
    scanf("%d",&i);
    scanf("%d",&j);
    if(i > j)
    {
        for(a = j;a <= i;a++)
        {
            if(a % 13 != 0)
            {
                sum = sum + a;
            }
        }
    }
    else if(i <  j)
    {
        for(a = i;a <= j;a++)
        {
            if(a % 13 != 0)
            {
                sum = sum + a;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
