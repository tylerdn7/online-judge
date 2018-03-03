/**
** 1011 - Sphere
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
    double area;
    int r;
    scanf("%d",&r);
    r = (double) r;
    area = (4.00 * r *r *r *3.14159) / 3.00;
    printf("VOLUME = %0.3lf\n",area);
    return 0;
}
