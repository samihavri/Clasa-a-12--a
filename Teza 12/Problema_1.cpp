#include <bits/stdc++.h>

using namespace std;
char s[251];
int main()
{
    int i{},n{},etape{},lg{};
    bool ok=false;
    cin>>s;
    n=strlen(s);
    while(i<n)
    {
        lg=i;
        while(s[lg]==s[lg++] && lg++<n)
            lg++;
        if(lg!=i)
        {
            strcpy(s+i,s+lg+1);
            i--;
            if(!ok)
                etape++;
            ok=true;
            }
        else
        {
            i++;
            ok=false;
        }
    }
    cout<<s<<" "<<etape;

    return 0;
}
