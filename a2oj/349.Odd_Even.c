/**
** Odd/Even
** Ahasanul Basher Hamza
** Date: 6/2/16
***/

#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    if(i <= 0)
    {
        return 0;
    }
    if(i % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    return 0;
}
