Subiectul I
1. d.
2. a) 1;
b) 23 17
c) #include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{  int a,b,c,i,j;
    cin>>a>>b;
    c=0;
    do
    {  i=a%2;
        j=b%2;
        if(i+j==0)
          { c=c+1;}  
        a=a*i + (1-i)*(a/2);
        b=b*i + (1-i)*(b/2);
    }while(i*j==1);
        cout<<c;
    return 0;
}
d) citeşte a,b
 (numere naturale nenule)
 c<-0
┌cat timp i*j!=1
│ i<-a%2
│ j<-b%2
│ ┌dacă i+j=0 atunci
│ │ c<-c+1
│ └■
│ a<-a*i+(1-i)*[a/2]
│ b<-b*j+(1-j)*[b/2]
└■
scrie c 


Subiectul II
1. b
2. a \
3. 3,2
4. 11
