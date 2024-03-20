Subiectl 1
1.a
2.a)4
b)0,1
Subiectul 2
  2.a
  3.3,4
  4.strchr("aeiou",a[i]) cout<<*;
    else cout<<a[i];
  5.#include <iostream>

using namespace std;

int main()
{
    int i,j,n,a[100][100];
    cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i%2==1)
                a[i][j]=i;
            else a[i][j]=j;
    for(i=1; i<=n; i++)
      {
          for(j=1; j<=n; j++)
            cout <<a[i][j]<<" ";
            cout<<endl;
      }
        return 0;
}
Subiectul 3
1.b
2.11101,11110,11111
3.#include <iostream>
// 12 7.5 6.5 3 8.5 7.5
using namespace std;
int counti(int n, float a[])
{
    int i,j,k=0;
    float s=0,m=0;
    for(i=1; i<=n; i++)
        {s=s+a[i];}
    m=s/n;
    for(i=1; i<=n; i++)
    {if(a[i]<=m)
        k++;}
    return k;
}
int main()
{
    float a[7];
    int i;
    for(i=1; i<=6; i++)
        cin>>a[i];
    cout<<counti(6,a);
        return 0;
}
4.#include <bits/stdc++.h>

using namespace std;
ifstream fin("date.in");
int main()
{
    int x,f[10001]{},k=13,aux,i;
    while(fin>>x)
    {
        f[x]++;
    }
    for(i=10000;i>=0;i--)
    {
        if(f[i]!=0)
        {
            k--;
        }
        if(k==0)
        {
            aux=i;
            break;
        }

    }
    cout<<aux;
    return 0;
}

  
