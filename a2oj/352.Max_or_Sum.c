/**
** Max or Sum
** Ahasanul Basher Hamza
** Date: 6/2/16
***/

#include <stdio.h>
int main()
{
    int i,j,n,max,mid,min,sum;
    scanf("%d %d %d", &i,&j,&n);
    if(i > n)
    {
        if(i > j)
        {
            max = i;
            mid = j;
            min = n;
        }
        else
        {
            max = j;
            mid = i;
            min = n;
        }

    }
    else
    {
        if(j > n)
        {
            max = j;
            mid = n;
            min = i;
        }
        else
        {
            max = n;
            mid = j;
            min = i;
        }
    }
    sum = (mid + min);
    if(sum > max)
    {
        printf("%d\n",sum);
    }
    else
    {
        printf("%d\n",max);
    }
    return 0;
}
