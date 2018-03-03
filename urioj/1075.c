/**
** 1075 - Remaining 2
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
    int i,n;
    scanf("%d",&n);
    for(i = 1;i < 10000;i++)
    {
        if(i % n == 2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
