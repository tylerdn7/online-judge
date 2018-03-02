/**
** 1060 - Positive Numbers
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
    int i,c = 0;
    float j;
    for(i = 0;i < 6;i++)
    {
        scanf("%f",&j);
        if(j > 0)
        {
            c++;
        }
    }
    printf("%d valores positivos\n",c);

    return 0;
}
