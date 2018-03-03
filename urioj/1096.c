/**
** 1096 - Sequence IJ 2
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
        for(j = 7;j >= 5;j--)
        {
           printf("I=%d J=%d\n",i,j);
        }

    }
    }
    return 0;
}
