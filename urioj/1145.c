/**
** 1145 - Logical Sequence 2
** Ahasanul Basher Hamza
** Date: 5/28/16
***/

#include <stdio.h>
 
int main() 
{
    int a,b,i;
    scanf("%d %d", &a,&b);
    if(a < 1 || a > 20)
    {
        return 0;
    }
    else if(b < a || b > 100000)
    {
        return 0;
    }
    else if(a > b)
    {
        return 0;
    }
    for(i = 1;i <= b;i++)
    {


        if(i % a == 0)
        {
            printf("%d",i);
            printf("\n");
        }
        else
        {
            printf("%d ",i);
        }

    }
    return 0;
}
