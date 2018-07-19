/**
** 3n + 1
** Ahasanul Basher Hamza
** Date: 19/07/18
***/


#include <iostream>
using namespace std;
int cycle(int m)
{
    int l = 1;
    while(m != 1)
    {
        if(m % 2 == 0)
        {
            m /= 2;
            l++;
        }
        else
        {
            m = (3 * m) + 1;
            l++;
        }
    }
    return l;
}

int main()
{
    int m,n,i,maxCyclelength,temp,mOriginal,nOriginal;
    while(cin >> m >> n)
    {
        mOriginal = m;
        nOriginal = n;

        if(m > n)
        {
            temp = m;
            m = n;
            n = temp;
        }
        maxCyclelength = cycle(m);

        for(i = m + 1;i <= n;i++)
        {
            temp = cycle(i);
            if(temp > maxCyclelength)
            {
                maxCyclelength = temp;
            }
        }
        cout << mOriginal << " " << nOriginal << " " << maxCyclelength << endl;
    }
    return 0;
}
