#include <bits/stdc++.h>

using namespace std;
ifstream f("bac.txt");
int k=1,v[100];
void problema3_14(int n)
{
    int x;
    int k=0;
    while(f>>x)
        v[x]++;
    for(int i=0; i<=99; i++)
    {
        k=v[i]+k;
        if(k>=n)
        {
            cout<<i;
            break;
        }
    }

}

int main()
{
    problema3_14(6);
    return 0;
}

