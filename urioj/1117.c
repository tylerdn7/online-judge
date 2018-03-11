/**
** 1117 - Score Validation
** Ahasanul Basher Hamza
** Date: 5/20/16
***/

#include <stdio.h>
 
int main() 
{
    float a,b,media = 0;
    int i = 0,j = 0;
    while(i != 2)
    {
        scanf("%f", &a);
        if(a > 0 && a < 11)
        {
            media = a + media;
            i++;
        }
        else
        {
            j++;
        }


    }
    for(i = 0;i < j;i++)
    {
        printf("nota invalida\n");
    }
    printf("media = %.2f\n",media / 2);
    return 0;
}
