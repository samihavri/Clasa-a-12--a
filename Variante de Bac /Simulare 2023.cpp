Subiectul I

1. d
2. f(2023) -- f(202) * 10 +2 -- f(20) *10 + 3 -- f(2) *10+2 -- f(0)*10+3 ==== 3232
   R: b
3. c
4. d
5. 

  Subiectul II

  1. 

  a) n=5174;
      
2.
  #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[101][101],i,j;
    for(i = 1; i <= 5; i++)
        for(j = 1; j <= 5; j++)
            if(a[i][j] == 0)
            {
                a[i][j] = 5 - i;
                a[j][i] = 5 - i;
            }
  for(i = 5; i >= 1; i--)
    {
        cout<<endl;
        for(j=1; j<=5; j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    return 0;
}

Subiectul 3
1.

#include <iostream>
using namespace std;
int NrImp(int x,int y,int &nr)
{
    int d,i,k=0;
    for(i=x; i<=y; i++)
    {
        for(d=1; d<=i; d++)
        {
            if( d%2==1 && i%d==0 )
                k++;
        }
        if(k==3)
        {
            nr++;
        }
        k=0;
    }
    return nr;
}
int main()
{
    int x,y,nr=0;
    cin>>x>>y;
    cout<<NrImp(x,y,nr);
    return 0;
}

2.
  #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char * p;
    char s[101],s1[101];
    cin.get(s,101);
    p = strtok(s, " ");
    while(p != NULL)
    {

        if(p[strlen(p)-1]=='.' && p[0]=='F')
            strcat(s1," fam. ");
        else if(p[strlen(p)-1]=='.' && p[0]=='G')
            strcat(s1," gen. ");
        else   if(p[strlen(p)-1]=='.' && p[0]=='S')
            strcat(s1," spe. ");
        else
        {
            strcat(s1," ");
            strcat(s1,p);
        }


        p = strtok(NULL,  " ");
    }
     cout << s1 << endl;

    return 0;
}

3.
  #include <bits/stdc++.h>

using namespace std;
ifstream f("bac.txt");
int main()
{
   int x,y,ma=0,k;
   while(f>>x)
   {
       k++;
       if(x>=ma && x!=y)
        {ma=x;cout<<k<<" ";}
       else if(x==y)
        ma=x;
        y=x;
   }
    return 0;
}
