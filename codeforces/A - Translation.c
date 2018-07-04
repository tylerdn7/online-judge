/**
** A - Translation
** Ahasanul Basher Hamza
** Date: 01/02/17
***/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <strings.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char s[120];
    char p[120];
    scanf("%s",s);
    scanf("%s",p);
    int i,c = 0,j;
    int n = strlen(s);
    for(i = n-1,j = 0;i >= 0;i--,j++)
    {
        if(s[i] != p[j])
        {
            c++;
            break;
        }
    }
    if(c == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
