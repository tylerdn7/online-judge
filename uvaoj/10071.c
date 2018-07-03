/**
** 10071 - Back to High School Physics
** Ahasanul Basher Hamza
** Date: 01/02/18
***/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a,b;
    while(scanf("%d %d", &a,&b) != EOF)
    {
        if((a < -100 || a > 100) && (b < 0 ||  b > 200))
        {
            break;
        }
        else
        {
            printf("%d\n",a*b*2);
        }

    }
    return 0;
}
