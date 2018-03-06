/**
** Positive or Negative
** Ahasanul Basher Hamza
** Date: 5/29/16
***/

#include <stdio.h>
int main()
{
    int s;
    scanf("%d", &s);
    if(s > 0)
    {
        printf("Positive\n");
    }
    else if(s < 0)
    {
        printf("Negative\n");
    }
    else if(s == 0)
    {
        printf("Zero\n");
    }
return 0;
}
