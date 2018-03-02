/**
** 1153 - Simple Factorial
** Ahasanul Basher Hamza
** Date: 3/7/16
***/


#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i,j,sum = 1;
    scanf("%d",&i);
    for(j = 1;j <= i;j++)
    {
        sum = sum * j;

    }
    printf("%d\n",sum);
    return 0;
}
