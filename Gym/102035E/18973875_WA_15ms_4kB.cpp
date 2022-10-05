#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int ar[n];
    int con=0;
    for(int i=0;i<n;i++)
    {
       // cout<<"ss1"<<endl;
        cin>>ar[i];
        if(ar[i]>k)
            con++;

    }
    //cout<<"ss"<<endl;
    sort(ar,ar+n);
    int r=n-k;
    int p=ar[r-1];

    //cout<<"p="<<p<<endl;
    if(p!=m)
    {
        cout<<"NO"<<endl;
    }
    else if(con<k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
