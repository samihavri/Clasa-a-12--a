#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");
void prob2_16(int &n,int c)
{
    int copie=0;
    while(n)
    {
        if(c<n%10)
        {


            copie=copie*10+c;
            copie=copie*10+n%10;
            c=99;
        }
        else copie=copie*10+n%10;
        n=n/10;
    }
    while(copie)
    {
        n=n*10+copie%10;
        copie=copie/10;
    }
    cout<<n;
}
int main()
{ int n;
cin>>n;
   prob2_16( n , 4 );
    return 0;
}

