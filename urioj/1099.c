/**
** 1099 - Sum of Consecutive Odd Numbers II
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
    int i,n,j,a,b,k,sum;
    scanf("%d", &n);
    int s[n];
    for(i = 0;i < n;i++)
    {
        sum = 0;
        scanf("%d %d",&a,&b);
        if(a > b)
        {
            for(j = b+1;j < a;j++)
            {
                if(j%2 != 0)
                {
                    sum = sum + j;
                }
            }
        }
        else if(a < b)
        {
            for(j = a+1;j < b;j++)
            {
                if(j%2 != 0)
                {
                    sum = sum + j;
                }
            }
        }
        s[i] = sum;
    }
    for(i = 0;i < n;i++)
    {
        printf("%d\n",s[i]);
    }
    return 0;
}
