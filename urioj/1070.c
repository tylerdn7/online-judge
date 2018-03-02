/**
** 1070 - Six Odd Numbers
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
    int i,j,n;
    scanf("%d", &n);
    for(i = n,j = 0;j < 6;i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\n",i);
            j++;
        }
    }
    return 0;
}
