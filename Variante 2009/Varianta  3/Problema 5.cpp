#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n,i,j,a[101][101],k=0;
int main()
{
    cin>>n;
    k=n;
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            a[i][j]=k;
            if(j==i)
                a[i][j]=0;
        }
        k=k-1;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
