#include<bits/stdc++.h>
using namespace std;
int ck(long long p,int k)
{
    int j=0;
    while(p!=0)
    {
        int r=p%10;
        //cout<<"r="<<r<<endl;
        if(r==4)
        {
            j+=1;
        }
        if(r==7)
            j+=1;
        p=p/10;

    }
    //cout<<j<<endl;
    if(j<=k)
    {
        return 1;
    }
    else
    {
        return 99;
    }
}
int main()
{
    long long n,k;
    cin>>n>>k;
    long long ar[n];
    int rk=0;
    int con=0;
    for(long long i=0;i<n;i++)
    {
        cin>>ar[i];
        rk=ck(ar[i],k);
        if(rk==1)
        {
            con++;
        }
    }
    cout<<con<<endl;
    return 0;
}
