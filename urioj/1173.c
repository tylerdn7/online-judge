/**
** 1173 - Array fill I
** Ahasanul Basher Hamza
** Date: 5/16/16
***/

#include <stdio.h>
 
int main() 
{
    int i,a;
    int n[10];
    scanf("%d", &a);
    if(a > 50)
    {
        return 0;
    }
    n[0] = a;
    for(i = 1;i < 10;i++)
    {
        n[i] = a*=2;
    }
    for(i = 0;i < 10;i++)
    {
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}
