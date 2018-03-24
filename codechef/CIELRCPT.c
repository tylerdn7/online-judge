/**
** Ciel and Receipt
** Ahasanul Basher Hamza
** Date: 1/7/16
***/

#include <stdio.h>
//take that
int main()
{
    int i,n,c,a;
    scanf("%d", &n);
    int ara[n];
    for(i = 0;i < n;i++)
    {
        scanf("%d", &a);
        c = 0;
        while(a >= 2048)
        {
            a -= 2048;
            c++;
        }
        while(a >= 1024)
        {
            a -= 1024;
            c++;
        }
        while(a >= 512)
        {
            a -= 512;
            c++;
        }
        while(a >= 256)
        {
            a -= 256;
            c++;
        }
        while(a >= 128)
        {
            a -= 128;
            c++;
        }
        while(a >= 64)
        {
            a -= 64;
            c++;
        }
        while(a >= 32)
        {
            a -= 32;
            c++;
        }
        while(a >= 16)
        {
            a -= 16;
            c++;
        }
        while(a >= 8)
        {
            a -= 8;
            c++;
        }
        while(a >= 4)
        {
            a -= 4;
            c++;
        }
        while(a >= 2)
        {
            a -= 2;
            c++;
        }
        while(a >= 1)
        {
            a -= 1;
            c++;
        }
        ara[i] = c;
 
    }
    for(i = 0;i < n;i++)
    {
        printf("%d\n",ara[i]);
    }
    return 0;
}
