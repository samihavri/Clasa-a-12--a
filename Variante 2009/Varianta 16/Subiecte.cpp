problema 5 
Zona Nordica : deasupra diagonalei principale si deasupra diagonalei secundare;
i<j si i+j<n+1
Zona Sudica : sub diagonala principala si sub diagonala secundara;
i>j si i+j>n+1
Zona Vestica : sub diagonala princiapala si deasupra diagonalei secundare;
i>j si i+j<n+1
Zona Estica : deasupra diagonalei principale si sub diagonala secundara;
i<j si i+j>n+1 


  problema 3
#include <bits/stdc++.h>
using namespace std;
int main()
{ int n,a[1001],k,z=0,i;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    cin>>k;
    for(i=1; i<=n; i++)
        if(a[i]%k==0 && a[i]%10==k)
            z++;
    cout<<z;
    return 0;
}
problema 4

