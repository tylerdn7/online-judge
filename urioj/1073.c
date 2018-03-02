/**
** 1073 - Even Square
** Ahasanul Basher Hamza
** Date: 3/6/16
***/
#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i,j;
    scanf("%d",&i);
    for(j = 1;j <= i;j++)
    {
        if(j % 2 == 0)
        {
            printf("%d^%d = %d\n",j,2,j*j);
        }
    }
    return 0;
}
