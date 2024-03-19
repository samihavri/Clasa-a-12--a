Problema 5

#include<bits/stdc++.h>

using namespace std;
int main()
{
int n,a[20][20],m,i,j,nr=0;
cin>>n;
m=n;
for(i=1;i<=n;i++)
{
   a[i][m]=n;
   m--;
for(j=m;j>=1;j--)
   a[i][j]=a[i][j+1]-1;
for(j=m+2;j<=n;j++)
   a[i][j]=a[i][j-1]+1;
}
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
cout<<a[i][j]<<" ";
nr++;
if(nr==n)
{
   cout<<'\n';
   nr=0;
}
}
  return 0;
}

Problema 3

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[101],i,n,c,b,k=0;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    b=a[1];
    c=a[n];
    for(i=1; i<=n; i++)
    {
        if(a[i]>=b && a[i]<=c || a[i]>=c && a[i]<=b)
            k++;
    }
    cout<<k;
    return 0;
}

Problema 4 

#include <iostream.h>
#include <fstream.h>
int n, x, y, p;
int main()
{
    ifstream f("numere.txt");
    f >> n;
    f >> x;
    n--;
    p = 1;
    while( n )
    {
        fin >> y;
        if( x > y) p++;
        n--;
    }
    cout << p << endl;
    f.close();
    return 0;
}

