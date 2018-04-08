/**
** 1794 - Laundry
** Ahasanul Basher Hamza
** Date: 6/15/16
***/

#include <stdio.h>
 
int main()
{
    int n,la,lb,sa,sb;
    scanf("%d",&n);
    if(n < 1 || n > 100)
    {
        return 0;
    }
    scanf("%d %d", &la,&lb);
    scanf("%d %d", &sa,&sb);
    if(la < 1 || la > 100 || sa < 1 || sa > 100)
    {
        return 0;
    }
    if(la <= n && lb >= n && sa <= n && sb >= n)
    {
        printf("possivel\n");
    }
    else
    {
        printf("impossivel\n");
    }
    return 0;
}
