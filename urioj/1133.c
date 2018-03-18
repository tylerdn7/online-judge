/**
** 1133 - Rest of a Division
** Ahasanul Basher Hamza
** Date: 5/23/16
***/

#include <stdio.h>
 
int main() 
{
    int i,j,a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a > b)
    {
        for(i = b+1;i < a;i++)
        {
            if(i % 5 == 2 || i % 5 == 3)
            {
                printf("%d\n",i);
            }
        }
    }
    if(a < b)
    {
        for(i = a+1;i < b;i++)
        {
            if(i % 5 == 2 || i % 5 == 3)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
