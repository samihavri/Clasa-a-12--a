
prob .2

#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");
int main()
{
    int ns,np,i,j,a[101][101],maxx=0,aux=0;
    f>>ns>>np;
    for(i=1; i<=ns; i++)
        for(j=1; j<=np; j++)
        {
            f>>a[i][j];
        }
    for(i=1; i<=ns; i++)
    {
        for(j=1; j<=np; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=1; i<=ns; i++)
    {   aux=0;
        maxx=0;
        for(j=1; j<=np; j++)
        {
            if(a[i][j]>maxx)
            {
                aux=j;
                maxx=a[i][j];
            }
        }
        cout<<i<<":"<<aux<<" , ";

    }

    return 0;
}
