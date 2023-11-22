#include <bits/stdc++.h>

using namespace std;
ifstream f("bac.txt");
void problema1_14()
{
    char s[251],*p,a[100];
    f.get(s,251);
    int k=0;
    p=strtok(s," ");
    while(p)
    {
        if(k+strlen(p)<=20)
        {
            strcpy(a+k,p);
            k=strlen(a);
            strcpy(a+k," ");
            k++;
        }
        else if(strlen(a)==20)
        {
            cout<<a<<endl;
            strcpy(a,"");
            strcpy(a,p);
            k=strlen(a);
            strcpy(a," ");
            k++;
        }
        else if(strlen(a)<20)
        {
            cout<<a;
            for(int i=strlen(a)+1; i<=20; i++)
                cout<<"*";
            cout<<endl;
            strcpy(a,"");
            strcpy(a,p);
            k=strlen(a);
            strcpy(a+k," ");
            k++;
        }
        p=strtok(NULL," ");
    }
    cout<<a;
}
int main()
{
    problema1_14();
    return 0;
}
