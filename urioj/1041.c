/**
** 1041 - Coordinates of a Point
** Ahasanul Basher Hamza
** Date: 6/17/16
***/

#include <stdio.h>
 
int main() 
{
    float x,y;
    scanf("%f %f",&x,&y);
    if(x > 0.0 && y > 0.0)
    {
        printf("Q1\n");
    }
    if(x > 0.0 && y < 0.0)
    {
        printf("Q4\n");
    }
    if(x == 0.0 && y == 0.0)
    {
        printf("Origem\n");
    }
    if(x < 0.0 && y > 0.0)
    {
        printf("Q2\n");
    }
    if(x < 0.0 && y < 0.0)
    {
        printf("Q3\n");
    }
    if(x == 0.0 && y != 0.0)
    {
        printf("Eixo Y\n");
    }

    if(y == 0.0 && x != 0.0)
    {
        printf("Eixo X\n");
    }
    return 0;
}
