/**
** 1142 - PUM
** Ahasanul Basher Hamza
** Date: 5/16/16
***/

#include <stdio.h>
 
int main() 
{  
    int i,n;
    scanf("%d", &n);
    for(i = 1;i <= n*4;i++)
    {
        if(i % 4 == 0)
        {
            printf("PUM");
            printf("\n");
        }
        else
        {
            printf("%d ",i);
        }

    }


    return 0;
}
