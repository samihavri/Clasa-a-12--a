#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream fin1("fin1.txt");
ifstream fin2("fin2.txt");
int main()
{
    int x,y,i,x1[101],vf[101]={0},j,n=0;
    i=0;
    while(fin1>>x)
    {
        if(x%5==0)
        {
            x1[i]=x;
            i++;
            n++;
        }
    }
    while(fin2>>y)
    {
        if(y%5==0)
        {
            x1[i]=y;
            i++;
            n++;
        }
    }
    for(i=0; i<=n; i++)
    {
        vf[x1[i]]++;
    }
    cout<<endl;

    for(i=1; i<=61; i++)
    {
        if(vf[i]==1 && i!=0)
            cout<<i<<" ";
    }

    return 0;
}
