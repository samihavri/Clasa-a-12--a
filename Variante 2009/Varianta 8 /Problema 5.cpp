#include <iostream>
using namespace std;
int main()
{
    int n,p,a[10][10],i,j,x=1;
    cin>>n>>p;
    for(i=1; i<=n; i++)
        for(j=1; j<=p; j++)
        {
            a[i][j]=x*x;
            x=x+2;
        }
    for(i=1; i<=n; i++)
    {
        cout<<endl;
        for(j=1; j<=p; j++)
            cout<<a[i][j]<<" ";
    }
    return 0;
}
