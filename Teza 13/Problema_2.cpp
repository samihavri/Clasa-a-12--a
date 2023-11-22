#include <iostream>

using namespace std;
int rotund(int n)
{
    if(n%2==true)
        return 0;
    int a=n%2,b;
    n/=2;
    while(n)
    {
        b=n%2;
        n/=2;
        if(a==b)
            return 0;
        a=b;
    }
    return 1;
}
int main()
{
   cout<<rotund(10);
    return 0;
}
