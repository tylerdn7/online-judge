/**
** 1020 - Age in Days
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
    int i = 0,j = 0,k = 0,n;
    scanf("%d", &n);
    while(n >= 365)
    {
        n = n - 365;
        i++;
    }
     while(n >= 30)
    {
        n = n - 30;
        j++;
    }
     while(n >= 1)
    {
        n = n - 1;
        k++;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",i,j,k);
    return 0;
}
