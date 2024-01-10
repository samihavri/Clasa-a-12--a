int termeni(int n, int m ,int t)
{
    int k=1,c=2,aux;
   while(c<n)
    {
      aux=c;
       c=k+c;
       k=aux;
    }
    m=k; t=c;
    cout<<n<<" "<<m<<" "<<t;
}
