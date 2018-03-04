/**
** Enormous Input Test
** Ahasanul Basher Hamza
** Date: 7/3/16
***/

#include <stdio.h>
int main()
{
   int i,n,a,c = 0;
   int j;
   scanf("%d %d",&n,&a);
   for(i = 0;i < n;i++)
   {
 
       scanf("%d", &j);
       if(j % a == 0)
       {
           c = c + 1;
       }
 
   }
   printf("%d",c);
 
    return 0;
}
 
