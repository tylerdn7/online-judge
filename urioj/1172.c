/**
** 1172 - Array Replacement I
** Ahasanul Basher Hamza
** Date: 3/8/16
***/

#include <stdio.h>
 
int main() {
 
    int i,n,j = 10;
    int s[j];
    for(i = 0;i < j;i++)
    {
        scanf("%d", &n);
        if(n <= 0)
        {
            s[i] = 1;
        }
        else
        {
            s[i] = n;
        }

    }
    for(i = 0;i < j;i++)
    {
        printf("X[%d] = %d\n",i,s[i]);
    }
    return 0;
}
