/**
** Life, the Universe, and Everything
** Ahasanul Basher Hamza
** Date: 6/30/16
***/

#include <stdio.h>
int main()
{
    int n,c = 0;
    while(scanf("%d", &n) != EOF)
    {
        if(c == 0)
        {
            if(n != 42)
            {
                printf("%d\n",n);
            }
            if(n == 42)
            {
                c++;
            }
 
        }
        else
        {
            ;
        }
 
    }
    return 0;
} 
