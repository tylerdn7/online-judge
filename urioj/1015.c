/**
** 1015 - Distance Between Two Points
** Ahasanul Basher Hamza
** Date: 3/8/16
***/

#include <stdio.h>
 
int main() 
{
    double x2,y2,x1,y1;
    double d,x,y,z;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    x = pow(x2 - x1,2);
    y = pow(y2 - y1,2);
    z = x + y;
    d = sqrt(z);
    printf("%0.4lf\n",d);
    return 0;
}
