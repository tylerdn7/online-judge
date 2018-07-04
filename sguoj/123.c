/**
** 123 The sum
** Ahasanul Basher Hamza
** Date: 04/07/18
***/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <windows.h>
#include <time.h>

#define MAXI(a,b)(a > b ? a : b)

int main()
{
    int fib[1000];
    fib[0] = 1;
    fib[1] = 1;
    int i,sum = 0;
    int n;
    scanf("%d", &n);
    for(i = 2;i < n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(i = 0;i < n;i++)
    {
        sum += fib[i];
    }
    printf("%d\n",sum);
}
