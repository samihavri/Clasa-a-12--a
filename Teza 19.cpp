#include <bits/stdc++.h>

using namespace std;
char s1[41],s2[41];

int main()
{
    int m,n;
    char v[]="aeiou";
    char s1[40];
    cin>>s1;
    char s2[40];
    cin>>s2;
    char aux[40];
    strcpy(aux,s2);
    n=strlen(s1);
    int i,j;
    int x=0;
    for(i=0; i<n; i++)
    {
        if(strchr(v,s1[i]))
        {
            strcpy(aux, s2 + x);
            strcpy(s2 + x + 1, aux);
            s2[x] = s1[i];
            strcpy(s1+i, s1+i+1);
            n--;
            x+=2;

        }
    }
    cout<<s1<<endl<<s2;
    return 0;
}
