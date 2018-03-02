/**
** 1064 - Positives and Average
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
    float r,avg = 0.0;
    int i,c = 0;
    for(i = 0;i < 6;i++)
    {
        scanf("%f",&r);
        if(r > 0)
        {
            c++;
            avg = r + avg;
        }

    }
    printf("%d valores positivos\n%0.1f\n",c,avg/c);
    return 0;
}
