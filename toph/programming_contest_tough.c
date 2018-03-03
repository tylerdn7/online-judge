/**
** Programming Contest is So Tough
** Ahasanul Basher Hamza
** Date: 28/02/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>


int main()
{
    int n,i;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        char s[150];
        scanf("%s",s);
        if(strcmp(s,"AdHoc") == 0)
        {
            printf("1\n");
        }
        else if(strcmp(s,"DataStructures") == 0)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }
    return 0;
}
