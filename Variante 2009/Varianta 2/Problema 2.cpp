#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("bac.txt");
int main()
{
    int fr[9999]= {0},n,i;

    while(f>>n)
    {
        if(n>0)
            fr[n]++;
    }
    for(i=1; i<=10000-1; i++)
    {
        if(fr[i]!=0)
            cout<<i<<" ";

    }

    return 0;
}
