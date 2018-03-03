/**
** 1116 - Dividing X by Y
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
    int i,n,j,a,b;
    float r;
    scanf("%d", &n);
    int s[n];
    int t[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d %d",&a,&b);
        s[i] = a;
        t[i] = b;
    }
    for(i = 0;i < n;i++)
    {
        if(t[i] == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            r = (float)s[i] / (float)t[i];
            printf("%.1f\n",r);
        }

    }
    return 0;
}
