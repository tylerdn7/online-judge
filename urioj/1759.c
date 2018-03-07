/**
** 1759 - Ho Ho Ho
** Ahasanul Basher Hamza
** Date: 3/10/16
***/

#include <stdio.h>
 
int main() 
{
   int i,n;
   scanf("%d", &n);
   if(n <= 0 || n >= 1000000)
   {
       return 0;
   }
   for(i = 0;i <= n;i++)
   {
      if(i == n)
      {
          printf("!");
      }
      else if(i < n-1)
      {
          printf("Ho ");
      }
      else if(i < n)
      {
          printf("Ho");
      }

   }
   printf("\n");
    return 0;
}
