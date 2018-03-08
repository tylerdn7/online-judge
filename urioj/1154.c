/**
** 1154 - Ages
** Ahasanul Basher Hamza
** Date: 5/18/16
***/

#include <stdio.h>
 
int main() 
{
    int i = 0;
    int n,c = 0;
    while(1)
    {
        scanf("%d", &n);
        i = i + n;
        c++;
        if(n <= 0)
        {
            i -= n;
            c--;
            break;
        }

    }
    printf("%0.2f\n",(float)i / c);
    return 0;
    return 0;
}
