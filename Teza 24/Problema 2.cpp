#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fr[100];
int main()
{
    ifstream fin ("bac.in");
    int x,p,maxim=0,k=1;
    fin>>x;
    p=x/100;

    while(fin>>x)
    {
        if(p==x/100)
            k++;
        else
        {
            if(k>maxim)
                maxim=k;
            fr[k]++;
            p=x/100;
            k=1;
        }
    }
    if(p==x/100)
        fr[k]++;
    cout<<maxim<<" "<<fr[maxim];
    return 0;
}




