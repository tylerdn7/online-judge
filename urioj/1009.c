/**
** 1009 - Salary with Bonus
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
    double i,s,o;
    char a[10];
    scanf("%s",a);
    scanf("%lf",&o);
    scanf("%lf",&s);
    i = s * .15;
    printf("TOTAL = R$ %0.2lf\n",i+o);
    return 0;
}
