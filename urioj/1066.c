/**
** 1066 - Even, Odd, Positive and Negative
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
    int i,c = 0,d = 0,e = 0,f = 0;
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&r);
        if(r % 2 ==0)
        {
            c++;
        }
        if(r > 0)
        {
            d++;
        }
        if(r < 0)
        {
            e++;
        }
        if(r % 2 != 0)
        {
            f++;
        }

    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",c,f,d,e);
    return 0;
}
