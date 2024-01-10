#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int x,y,maxx=0,v[5000]={0},i;
    f>>y;
    while(f>>x)
    {

        if(y<x)
        {
            y=x;
            maxx=x;
        }
        else
        {
            y=x;
            if(maxx!=0)
            {
                v[maxx]++;
            }
            maxx=0;
        }
    }

    for(i=0; i<5000; i++)
    {
        if(v[i]!=0)
             cout<<i<<" ";
    }


    return 0;
}
