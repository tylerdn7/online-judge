/**
** 1555 - Functions
** Ahasanul Basher Hamza
** Date: 6/3/16
***/

#include <stdio.h>
 
int main() 
{
  int r,b,c,i,n,y,x;
    scanf("%d", &n);
    int ara[n];
    int saw[n];
    for(i = 0;i < n; i++)
    {
        scanf("%d %d", &x, &y);
        if(x < 1 || x > 100 || y < 1 || y > 100)
        {
            return 0;
        }
        ara[i] = x;
        saw[i] = y;
    }
    for(i = 0;i < n;i++)
    {
        r = ((3*ara[i]) * (3*ara[i])) + (saw[i]*saw[i]);
        b = (2*(ara[i]*ara[i])) + ((5*saw[i]) * (5*saw[i]));
        c = ((-100) * ara[i]) + (saw[i]*saw[i]*saw[i]);
        if(r > c)
        {
            if(r > b)
            {
                printf("Rafael ganhou\n");
            }
            else
            {
                printf("Beto ganhou\n");
            }
        }
        else
        {
            if(b > c)
            {
                printf("Beto ganhou\n");
            }
            else
            {
                printf("Carlos ganhou\n");
            }
        }
    }
    return 0;
}
