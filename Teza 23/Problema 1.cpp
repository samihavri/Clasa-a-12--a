#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[51][51],i,j,n;
    cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            cin>>a[i][j];
    int maxim=a[1][1];

    for(i=1; i<=n; i++)
    {
        if(a[i][i]>maxim)
            maxim=a[i][i];
    }
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(a[i][j]%2==0 && a[i][j]<1000)
                a[i][j]=maxim;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
