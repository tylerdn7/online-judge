/**
** 1095 - Sequence IJ 1
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
    int i,j;
    for(j = 60,i = 1;j >= 0;j-=5,i+=3)
    {
        printf("I=%d J=%d\n",i,j);
    }
    return 0;
}
