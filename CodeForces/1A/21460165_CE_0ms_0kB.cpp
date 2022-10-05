using namespace std;
int main()
{
    long long m,n,a;
    cin>>n>>m>>a;
    int p=0;
    p=n/a;
    if(p*a<n)
    {
        p++;
    }
    int q=0;
    q=m/a;
    if(q*a<m)
    {
        q++;
    }
    cout<<p*q<<endl;
    return 0;
}