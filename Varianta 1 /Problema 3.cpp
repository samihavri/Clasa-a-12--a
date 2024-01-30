#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("bac.txt");
int main()
{
    int n,x,k=0;
    cin>>n;
    while (f>>x)
    {
        if(x%n==0)
            cout<<x<<" ";
        k++;
    }
    if (k==0)
        cout<<"NU EXISTA";
    return 0;
}
