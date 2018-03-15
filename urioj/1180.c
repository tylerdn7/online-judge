/**
** 1180 - Lowest Number and Position
** Ahasanul Basher Hamza
** Date: 5/20/16
***/

#include <stdio.h>
 
int main() 
{
    int n,i,min,j;
    scanf("%d", &n);
    int ara[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d", &ara[i]);
    }
    min = ara[0];
    for(i = 0;i < n;i++)
    {
        if(ara[i] < min)
        {
            min = ara[i];
            j = i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",j);
    return 0;
}
