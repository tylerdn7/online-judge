/**
** 1143 - Squared and Cubic
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
    int i,n,j;
    scanf("%d", &n);
    if(n < 1 || n > 1000)
    {
        return 0;
    }
    for(i = 1;i <= n;i++)
    {
       for(j = 1;j <= 1;j++)
       {
           printf("%d %d %d\n",i,i*i,i*i*i);
       }
    }
    return 0;
}
