/**
** 1131 - Grenais
** Ahasanul Basher Hamza
** Date: 5/24/16
***/

#include <stdio.h>
 
int main() 
{
    int i,a,b,c = 0,d = 0,e = 0,j = 0,s;
    scanf("%d %d", &a, &b);
    j++;
    if(a > b)
    {
        c++;
    }
    if(a < b)
    {
        d++;
    }
    if(a == b)
    {
        e++;
    }
    scanf("%d", &i);

    while(i != 2)
    {
        scanf("%d %d", &a, &b);
        scanf("%d", &i);
        if(a > b)
        {
            c++;
        }
        if(a < b)
        {
            d++;
        }
        if(a == b)
        {
            e++;
        }
        j++;
    }
    for(s = 0;s < j;s++)
    {
        printf("Novo grenal (1-sim 2-nao)\n");
    }
    printf("%d grenais\n",j);
    printf("Inter:%d\n",c);
    printf("Gremio:%d\n",d);
    printf("Empates:%d\n",e);
    if(c > d)
    {
        printf("Inter venceu mais\n");
    }
    else if(c < d)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Não houve vencedor\n");
    }
    return 0;
}
