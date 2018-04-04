/**
** 1963 - The Motion Picture
** Ahasanul Basher Hamza
** Date: 6/4/16
***/

#include <stdio.h>
 
int main() 
{
    float i,j,p;
    scanf("%f %f", &i,&j);
    if(i <= 0.00 || i > 1000.00 || j <= 0.00 || j > 1000.00)
    {
        return 0;
    }
    if(i > j)
    {
        return 0;
    }
    if(j >= i)
    {
        j = j-i;
    }
    p = (j*100.00) / i;
    printf("%.2f%%\n",p);
    return 0;
}
