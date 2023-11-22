#include <bits/stdc++.h>
//Varianta T100 data in 10nov la simulare 12C
using namespace std;
char s1[201], s2[201];
char *p;
int i;
int main()
{
    cin.getline(s1,201);
    p=strtok(s1," ");
    while(p)
    {
        bool cifre=false;
        for(i=0; i<strlen(p); i++)
            if(strchr("0123456789",p[i]))
                cifre=true;

        if(cifre==false)
        {
            if(p[0]>='a' && p[0]<='z')
                p[0]=toupper(p[0]);
            strncat(s2,p,1);
        }
        p=strtok(NULL," ");
    }
    cout<<s2;
    return 0;
}
