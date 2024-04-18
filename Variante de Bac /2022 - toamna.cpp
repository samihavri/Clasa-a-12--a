Subiectul I

1. b.
2. d.
3. d.
4. c.
5.

  Subiectul II
  
1.
  a) 45
  b) 10,12
  c) #include <bits/stdc++.h>
using namespace std;
int main()
{ int n ,m,x,y;
    cin>>m>>n;
    x=1;
    while(x==1)
    {
        x=m;
        y=n;
        n=n-1;
        while(x!=y)
        {
            if( x>y )
                x=x-y;
            else y=y-x;
        }
    }
    cout<<n+1;
    return 0;
}
d) citeşte m,n
 (numere naturale nenule, m<n)
 x<=1
┌repeta
│ x<-m; y<-n; n<-n-1
│┌cât timp x≠y execută
││┌dacă x>y atunci x<-x-y
│││altfel y<=y-x
││└■
│└■
└■ pana cand x≠1
scrie n+1
2. nodul 2
3.  
if(x.temperatura > 11)
    cout<"calduros";  
        else if(x.temperatura < 10)
              cout<<"racoros";
                  else cout<<"normal";
Subiectul III

1. 
  #include <bits/stdc++.h>
using namespace std;
int schimb(int n, int x, int p)
{
    int cnt = 0, nr_nou = 0, put = 1;
    while (n)
    {
        if (cnt == p)
        {
            nr_nou = x * put + nr_nou;
        }
        else
        {
            nr_nou = n % 10 * put + nr_nou;
        }
        n /= 10;
        put *= 10;
        cnt++;

    }
    return nr_nou;
}
int main()
{
    cout<<schimb(12587,6,3);
}

2. 
  // problema 2
#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");

int main()
{
    char s[50];
    cin.get(s,50);
    for(int i=0;i<strlen(s);i++)
            while(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
                s[i]--;
    cout<<s;
    return 0;
}

3.
  
//problema 3
#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");

int main()
{
    int x,y,max1=0,max2=0,nr1=1,nr2=1;
    f>>x;
    while(f>>y)
    {

        if(x%2==y%2 && y%2==1)
            nr1++;

        else if(x%2==y%2 && y%2==0)
            nr2++;

        if(max1<nr1)
        {
            max1=nr1;
            nr1=1;
        }
        else if(max2<nr2)
        {
            max2=nr2;
            nr2=1;
        }
        x=y;
    }
    cout<<max2<<" "<<max1;
    return 0;
}




















  
   
