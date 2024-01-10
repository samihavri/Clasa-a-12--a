#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[40][40],ok,nr=0;
    float s=0;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    for(int i=0;i<n;i++)
        {
            ok=0;
            for(int j=0;j<n-1;j++)
            if(a[j][i]>=a[j+1][i])
                ok=1;
            if(ok==0)
                {
                    cout<<a[0][i]<<endl;
                    s=s+a[0][i];
                    nr++;
                }
        }
        if(s==0)
        cout<<"Nu exista coloane ordonate strict crescator";
        else cout<<s/nr;
        
