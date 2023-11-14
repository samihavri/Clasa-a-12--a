#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void prob12_2()
{
    int i,j,k=0,a,b,r,n,m;
    cin>>n>>m;
    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            a=i;
            b=j;
            while(b)
            {
                r=a%b;
                a=b;
                b=r;
            }
            if(i*j/a==m)
                k++;
        }
    }
    cout<<k;
}
int main()
{
    prob12_2();
    return 0;
}
