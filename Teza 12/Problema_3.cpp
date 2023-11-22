#include <bits/stdc++.h>

using namespace std;
ifstream f("BAC.txt");
int main()
{
    int x,a[20]= {0},maxi{};
    while(f>>x)
        a[x+9]++;
    for(int i=0; i<19; i++)
        if(a[i]!=0 && a[i]>maxi)maxi=a[i];
    for(int i=0; i<19; i++)
        if(a[i]==maxi) cout<<i-9<<" ";
    return 0;
}
