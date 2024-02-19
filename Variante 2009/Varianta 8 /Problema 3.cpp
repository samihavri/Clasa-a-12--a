#include <bits/stdc++.h>
using namespace std;
ifstream f("bac.in");
bool eP(int numar)
{
    if((int)sqrt(numar) == sqrt(numar))
        return 1;
    return 0;
}

int main()
{
    int n,x,s=0;
    f>>n;
    while(f>>x)
    {
        if(eP(x)==1)
        {
            s=s+x;
            cout<<x<<"+";
        }

    }

    cout<<"="<<s;
    return 0;
}
 //afiseaza un + langa = (greseala )
