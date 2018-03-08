/**
** 1175 - Array change I
** Ahasanul Basher Hamza
** Date: 5/18/16
***/

#include <stdio.h>
 
int main() 
{
    int i,j,max;
    int boro_mama[20];
    int soto_mama[20];
    for(i = 0;i < 20;i++)
    {
        scanf("%d", &boro_mama[i]);
    }
    for(i = 0,j = 19;i < 20;i++,j--)
    {
        soto_mama[i] = boro_mama[j];

    }
    for(i = 0;i < 20;i++)
    {
        printf("N[%d] = %d\n",i,soto_mama[i]);
    }
    return 0;
}
