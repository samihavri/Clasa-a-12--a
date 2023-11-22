#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");
int k=1,v[100];
int regulat(int n)
{
    while(n!=1)
    {
        if(n%5==0)
        {
            k=5*k;
            n/=5;
        }
        else if(n%3==0)
        {

            k=3*k;
            n/=3;
        }
        else
        {
            k*=2;
            n/=2;
        }
    }
    return k;



}
int main()
{
    cout<<regulat(44);
    return 0;
}
