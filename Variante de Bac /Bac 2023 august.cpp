
II . 2
 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    struct produs
    {
        char denumire[20];
        int pret;

    }p;
    char a;
    cin>>p.denumire;
    cin>>p.pret;
    if(p.pret<100)
    {
        a=p.denumire[0];
    } else cout<<"*";


    return 0;
}


Prob.1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void DNPI(int n)
{
    int d,i,nr=0;
    cout<<"1 ";
    for(i=4; i<=n; i++)
    {
        if(n%i==0 && i%2!=0)
        {
            for(d=2; d<i; d++)
            {
                if(i%d==0)
                    nr++;
            }
            if(nr!=0)
                cout<<i<<" ";
        }
        nr=0;
    }
}


int main()
{
    int a;
    a=90;
    DNPI(a);

    return 0;
}


Prob.2

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

ifstream f("date.in");

int main()
{
    int v[20][20],i,j,sum=0,maxx=0,m,n;
    f>>m>>n;
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            f>>v[i][j];
    for(i=1; i<m; i++)
    {
        for(j=1; j<n; j++)
        {
            sum=v[i][j]+v[i][j+1]+v[i+1][j]+v[i+1][j+1];
            if(sum>maxx)
                maxx=sum;
            sum=0;
        }

    }
    cout<<maxx;


    return 0;
}




Prob.3

#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;

 ifstream f("date.in");

int main()
{

   int i,fr[10000]={0},perechi=0,x;
   long m,n;
   f>>m>>n;
   for(i=1; i<=m; i++)
   {
       f>>x;
       fr[x]++;
   }

   for(i=1; i<=n; i++)
   {
       f>>x;
       if(fr[x]>0)
       {
            perechi++;
       fr[x]--;
       }
   }
   cout<<perechi;

    return 0;
}
