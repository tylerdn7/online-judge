/**
** 1177 - Array Fill II
** Ahasanul Basher Hamza
** Date: 5/20/16
***/

#include <stdio.h>
 
int main() 
{
    int i,j,n;
    scanf("%d", &n);
    if(n <= 2 || n >= 50)
    {
        return 0;
    }
    int ara[1000];
    for(i = 0,j = 0;i < 1000;i++,j++)
    {
        if(j == n)
        {
            j = 0;
        }

            ara[i] = j;


    }
    for(i = 0;i < 1000;i++)
    {
        printf("N[%d] = %d\n",i,ara[i]);
    }
    return 0;
}
