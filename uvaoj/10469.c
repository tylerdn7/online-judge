/**
** 10469 - To Carry or not to Carry
** Ahasanul Basher Hamza
** Date: 01/02/17
***/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() 
{
    unsigned long int a,b,p;
    while(scanf("%lu %lu", &a, &b) != EOF)
    {
        p = a ^ b;
        printf("%lu\n",p);
    }
    return 0;
}
