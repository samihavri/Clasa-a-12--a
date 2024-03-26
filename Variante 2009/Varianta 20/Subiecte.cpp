Subiectul 1
1.a
2.a)9831
  b)3210
  c)#include

using namespace std;
int main()
{int n, a,m, n,b;
cin>>n;
a=n%10;
m=a;
while(n>9)
{n=n/10;
b=n%10;
if(a>b)
{m=m*a+b;
a=b;}}
cout<<m;
reurn 0;}
  d)daca n>9 repeta...pana cand n<=9
Subiectul 2
1.d
2.a
4.a[i]>='A' && a[i]<='z'
5.#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,a[100][100];
    cin>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i==1 || i==n || j==1 || j==n)
                a[i][j]=i+j;
            else
                a[i][j]=a[i-1][j]+a[i][j-1]+a[i-1][j-1];


    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
                cout<<endl;
    }
    return 0;
}
Subiectul 3
1.c
2.35789,35679,35678
3. #include<iostream>

using namespace std;

void nule(float a[100],int n)
{
  int i,j;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(a[i]==0 && a[j]!=0)
swap(a[i],a[j]);
for(i=1;i<=n;i++)
cout<<a[i]<<" ";
}
4.
