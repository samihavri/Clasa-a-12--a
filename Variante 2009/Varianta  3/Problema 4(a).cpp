#include <bits/stdc++.h>
using namespace std;
int cif(int &a,int b, int &k)
{
    while(a!=0)
    {
        if(a%10==b)
            k++;
        a=a/10;
    }
    return k;

}
int main()
{
    int a,b,k=0;
    cin>>a;
    cin>>b;
    cout<<cif(a,b,k);

    return 0;
}
