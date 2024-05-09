Subiectul 3 ex 3

  #include <bits/stdc++.h>
using namespace std;
ifstream f("bac.in");
int main()
{
    int fv[101],i=1,j,k=0,x,n,y;
    f>>n>>x;
    while(f>>y)
    {
        fv[i]=y;
        i++;
    }
    for(i=1; i<=n; i++)
      {for(j=i+1; j<=n; j++)
        { if(fv[i]+fv[j]<=x )
            {cout<<"("<<fv[i]<<","<<fv[j]<<")";
                k++;
            }}}
    cout<<endl;
    cout<<k;
    return 0;
}
