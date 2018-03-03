/**
** 1097 - Sequence IJ 3
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
    int i,j,k;
    for(k = 0;k < 1;k++)
    {
    for(i = 1;i <= 9;i+=2)
    {
        for(j = i+6;j >= 5+i-1;j--)
        {
           printf("I=%d J=%d\n",i,j);
        }

    }
    }

    return 0;
}
