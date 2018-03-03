/**
** 1065 - Even Between five Numbers
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
    int r;
    int i,c = 0;
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&r);
        if(r % 2 ==0)
        {
            c++;
        }

    }
    printf("%d valores pares\n",c);
    return 0;
}
