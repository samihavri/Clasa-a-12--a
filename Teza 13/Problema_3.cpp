int n,x;
void problema3_13()
{
    f>>n;
    int c=n,p=1;
    int y,k=0;
    while(c)
    {
        p=p*10;
        c=c/10;
    }
    while(f>>x)
    {
        if(n==x%p)
            k=x;
    }
    if(k==0)
        cout<<"Nu exista";
    else cout<<k;
}


int main()
{
    problema3_13();
    return 0;
}
