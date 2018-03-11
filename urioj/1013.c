/**
** 1013 - The Greatest
** Ahasanul Basher Hamza
** Date: 5/19/16
***/

#include <stdio.h>
 
int main() 
{
    int r,b,c;
    scanf("%d %d %d", &r,&b,&c);
    if(r > c)
    {
        if(r > b)
        {
            printf("%d eh o maior\n",r);
        }
        else if(r < b)
        {
            printf("%d eh o maior\n",b);
        }
    }
    else
    {
        if(b < c)
        {
            printf("%d eh o maior\n",c);
        }
        else if(b > c)
        {
            printf("%d eh o maior\n",b);
        }


    }
    return 0;
}
