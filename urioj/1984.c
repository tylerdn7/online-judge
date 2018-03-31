/**
** 1984 - The Pronalância Puzzle
** Ahasanul Basher Hamza
** Date: 5/31/16
***/

#include <stdio.h>
 
int main() 
{
    long long int n;
    scanf("%llu", &n);
    if(n < 0 || n  > 9999999999)
    {
        return 0;
    }
    long long int j = n;
    int c = 0,k,l;
    while(n != 0)
    {
        k = n % 10;
        n /= 10;
        c++;
    }
    int i = 0;
    long long int ara[c];
    while(j != 0)
    {
        l = j % 10;
        j /= 10;
        ara[i] = l;
        i++;
    }
    for(i = 0;i < c;i++)
    {
        printf("%llu",ara[i]);
    }
    printf("\n");
    return 0;
}
