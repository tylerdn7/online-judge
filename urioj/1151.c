/**
** 1151 - Easy Fibonacci
** Ahasanul Basher Hamza
** Date: 5/31/16
***/

#include <stdio.h>
 
int main() 
{
   int i,n;
   scanf("%d", &n);
   if(n < 0 || n > 46)
   {
       return 0;
   }
   int fib[n];
   for(i = 0;i < n;i++)
   {
       if(i == 0)
       {
           fib[0] = 0;
       }
       else if(i == 1)
       {
           fib[1] = 1;
       }
       else
       {
           fib[i] = fib[i-2]+ fib[i-1];
       }
   }
   for(i = 0;i < n;i++)
   {
       if(i == n-1)
       {
           printf("%d",fib[i]);
       }
       else
       {
           printf("%d ",fib[i]);
       }
   }
   printf("\n");
    return 0;
}
