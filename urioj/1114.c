
/**
** 1114 - Fixed Password
** Ahasanul Basher Hamza
** Date: 5/18/16
***/

#include <stdio.h>
 
int main() {
    int n,c = 0,i;
    while(n != 2002)
    {
        scanf("%d",&n);
        c++;
    }
    for(i = 0;i < c - 1;i++)
    {
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");
    return 0;
}
