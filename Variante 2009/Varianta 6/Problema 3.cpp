#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s=0,i,v[101],n;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>v[i];
    while(n>0)
    {
        s=0;
        for(i=0; i<n; i++)
            s=s+v[i];
            cout<<s<<" ";
            n--;

    }
    return 0;
}
