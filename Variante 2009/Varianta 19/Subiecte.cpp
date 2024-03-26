Subiectul 1
1.a
2 a)2,3,4
  b)312,1343/312,1342
  c)#include <iostream>

using namespace std;

int main()
{
    int a,b,i;
    cin>>a>>b;
    a=((a/10)%10)*10+a%10;
    b=((b/10)%10)*10+b%10;
    for(i=a;i<=b;i++)
        if(i/10==i%10)
        cout<<i%10;
    return 0;
}
d)i=a repeta pana cand i>b
  
  Subiectul 2
1.a
3.bac20092009
4.a.y==b.y
5.if(i%2==1) a[i][j]=i+j;
else a[i][j]=a[i-1][j-1];




Subiectul 3
1.c
2.10349,10365,10367
3.if(x[i]<0)
swap(x[i],x[i+1])


#include <bits/stdc++.h>
using namespace std;
ifstream f("date1.in");
ifstream g("date2.in");
int main()
{
    int n,m,x,y,i,j;
    f>>n;
    g>>m;
    i=j=1;
    f>>x;
    g>>y;
    while(i<=n && j<=m)
    {
        if(x<y) 
            { cout<<x<<" ";
            f>>x;
            i++;}
        else if(y<x) 
            { cout<<y<<" ";
            g>>y;
            j++;} 
        else { cout<<x<<" ";
                f>>x;
                g>>y;
                i++;
                j++; } 
    }
        while(i<=n) 
            { cout<<x<<" ";
            f>>x;
            i++;} 
        while(j<=m)     
            { cout<<y<<" ";
            g>>y;
            j++;} 
        
    return 0;
}
