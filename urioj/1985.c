/**
** 1985 - MacPRONALTS
** Ahasanul Basher Hamza
** Date: 5/22/16
***/

#include <stdio.h>
 
int main() 
{
    int i,j,n,a,b;
    float s,k;
    scanf("%d", &n);
    if(n < 1 || n > 5)
    {
        return 0;
    }
    for(i = 0;i < n;i++)
    {
        scanf("%d %d", &a, &b);
        if(n < 1 || n > 500)
        {
            return 0;
        }
        k = b;
        if(a == 1001)
        {
            k = (float)b * 1.50;
        }
        else if(a == 1002)
        {
            k = (float)b * 2.50;
        }
        else if(a == 1003)
        {
            k = (float)b * 3.50;
        }
        else if(a == 1004)
        {
            k = (float)b * 4.50;
        }
        else if(a == 1005)
        {
            k =(float) b * 5.50;
        }
        s = s + k;

    }
    printf("%.2f\n",s);
    return 0;
}
