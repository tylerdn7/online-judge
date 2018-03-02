/**
** 1019 - Time Conversion
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
    int n,i = 0,j = 0,k = 0;
    scanf("%d", &n);
    while(n >= 3600)
    {
        n = n - 3600;
        i++;
    }
    while(n >= 60)
    {
        n = n - 60;
        j++;
    }
    while(n >= 1)
    {
        n = n - 1;
        k++;
    }
    printf("%d:%d:%d\n",i,j,k);
    return 0;
}
