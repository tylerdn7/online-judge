/**
** Subtract two numbers
** Ahasanul Basher Hamza
** Date: 2/6/16
***/

#include <stdio.h>
#include <math.h>
int main()
{
    int i,j;
    char c;
    scanf("%d %c %d", &i,&c,&j);
    if(i < 1 || i > 1000 || j < 1 || j > 9)
    {
        return 0;
    }
    printf("%d\n",abs(j-i));
    return 0;
}
