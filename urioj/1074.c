/**
** 1074 - Even or Odd
** Ahasanul Basher Hamza
** Date: 3/6/16
***/

#include <stdio.h>
 
int main() 
{
    int n,i,j;
    scanf("%d", &n);
    int a[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d", &j);
        a[i] = j;
    }
    for(i = 0;i < n;i++)
    {
        if(a[i] % 2 == 0 && a[i] > 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if(a[i] % 2 != 0 && a[i] > 0)
        {
            printf("ODD POSITIVE\n");
        }
        if(a[i] % 2 == 0 && a[i] < 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        if(a[i] % 2 != 0 && a[i] < 0)
        {
            printf("ODD NEGATIVE\n");
        }
        if(a[i] == 0)
        {
            printf("NULL\n");
        }
    }
    return 0;
}
