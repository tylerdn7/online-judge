/**
** 1012 - Area
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
    double a,b,c,pi = 3.14159;
    double i,j,k,l,m;
    scanf("%lf %lf %lf",&a,&b,&c);
    i = (a * c) / 2;
    j = 3.14159 * c * c;
    k = ((a+b) * c) / 2;
    l = b*b;
    m = a*b;
    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",i,j,k,l,m);
    return 0;
}
