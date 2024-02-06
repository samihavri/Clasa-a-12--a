#include <bits/stdc++.h>

using namespace std;
ifstream fin("nr.txt");
int main()
{
    int y,i{},a[100],k{};
    while (fin>>y)
    {
        if(y>9 && y<100)
        {
            a[i]=y;
            i++;
            k++;
        }
    }
    for(i=0; i<k; i++)
    {
        if(a[i]<a[i+1])
            swap(a[i],a[i+1]);
    }
    for(i=0; i<k; i++)
        cout<<a[i]<<" ";
    return 0;
}
