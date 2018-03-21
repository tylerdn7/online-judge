/**
** 1961 - Jumping Frog
** Ahasanul Basher Hamza
** Date: 5/27/16
***/

#include <stdio.h>
 
int main() 
{
    int i,a,b,c = 0;
    scanf("%d %d", &a, &b);
    if(a < 1 || a > 5 || b < 1 || b > 100)
    {
        return 0;
    }
    int ara[b];
    for(i = 0;i < b;i++)
    {
        scanf("%d", &ara[i]);
    }
    for(i = 0;i < b;i++)
    {
        if(abs(ara[i] - ara[i+1] > a) && i < b - 1)
        {
            c++;
        }
        if(i < b-1)
        {
            if(abs(ara[i] - ara[i+1]) > a)
            {
                c++;
            }
        }

    }

    if(c == 0)
    {
        printf("YOU WIN\n");
    }
    else if(c > 0)
    {
        printf("GAME OVER\n");
    }
    return 0;
}
