/**
** 1071 - Sum of Consecutive Odd Numbers I
** Ahasanul Basher Hamza
** Date: 5/31/16
***/

#include <stdio.h>
 
int main() 
{
    int i,j = 0,a,b;
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        for(i = b+1;i < a;i++)
        {
            if(i % 2 != 0)
            {
                j = j + i;
            }
        }
    }
    else if(a < b)
    {
        for(i = a+1;i < b;i++)
        {
            if(i % 2 != 0)
            {
                j = j + i;
            }
        }
    }
    printf("%d\n",j);


    return 0;
}
