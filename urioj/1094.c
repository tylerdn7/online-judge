/**
** 1094 - Experiments
** Ahasanul Basher Hamza
** Date: 6/3/16
***/

#include <stdio.h>
 
int main() 
{
    int a,i,n,j,k,l,c;
    scanf("%d", &n);
    char s;
    for(i = 0,j = 0,k = 0,l = 0;i < n;i++)
    {
        scanf("%d %c", &a,&s);
        if(s > 'Z')
        {
            s = s - 32;
        }
        if(a < 1 || a > 15)
        {
            return 0;
        }
        if(s == 'C')
        {
            l = l + a;
        }
        else if(s == 'R')
        {
            j = j + a;
        }
        else if(s == 'S')
        {
            k = k + a;
        }
    }
    c = l + j+ k;
    printf("Total: %d cobaias\n",c);
    printf("Total de coelhos: %d\n",l);
    printf("Total de ratos: %d\n",j);
    printf("Total de sapos: %d\n",k);
    printf("Percentual de coelhos: %.2f %%\n",(float) ((l*100) / (float)c));
    printf("Percentual de ratos: %.2f %%\n",(float) ((j*100) / (float)c));
    printf("Percentual de sapos: %.2f %%\n",(float) ((k*100) / (float)c));
    return 0;
}
