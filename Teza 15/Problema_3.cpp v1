#include <bits/stdc++.h>

using namespace std;
ifstream f("bac.txt");
int n,a[100];
void sir()
{
    int maxim{},nr{},num{};
    for(int i=2; i<=n; i++)
        if(a[i]<a[i-1] && a[i]<a[i+1])
        {
            maxim=1;
            int k1=i,k2=i;
            int st=i-1;
            int dr=i+1;
            while(a[k1]<a[st] && a[k2]<a[dr])
            {
                k1=st;
                k2=dr;
                st--;
                dr++;
                maxim=maxim+2;
            }

            if(nr<=maxim)
                if(nr==maxim)
                    num++;
                else
                {
                    nr=maxim;
                    num=1;
                }
            i=dr;


        }
        if(num)
               cout<<nr<<" "<<num;
            else cout<<"Nu exista";
}
int main()
{
    f>>n;
    for(int i=1; i<=n; i++)
        f>>a[i];
    sir();
    return 0;
}


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");
int n,a[100];

int main()
{
    int n,x,y,num,maxx=0,nr=1;
    bool ok=true;
    f>>n>>x;
    n--;
    while(n!=0)
    {
        f>>y;
        n--;
        if(x>=y)
            if(ok)
                nr++;
            else
            {
                nr=1;
                ok=true;
            }
        else
        {
            ok=false;
            nr++;
            if(nr>=maxx)
                if(nr==maxx)
                    num++;
                else
                {
                    maxx=nr;
                    num=1;
                }
            x=y;
        }
    }
    cout<<maxx<<" "<<num;


    return 0;
}
