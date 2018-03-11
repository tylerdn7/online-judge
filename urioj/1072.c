/**
** 1072 - Interval 2
** Ahasanul Basher Hamza
** Date: 5/18/16
***/

#include <stdio.h>
 
int main() 
{
    int i,n,a,c1 = 0,c2 = 0;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        scanf("%d", &a);
        if(a >= 10 && a <= 20)
        {
            c1++;
        }
        else
        {
            c2++;
        }

    }
    printf("%d in\n%d out\n",c1,c2);
    return 0;
}
