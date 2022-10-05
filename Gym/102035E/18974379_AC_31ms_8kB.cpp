#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int ar[n];
    int con=0;
    int pk=0;
    for(int i=0;i<n;i++)
    {
       // cout<<"ss1"<<endl;
        cin>>ar[i];
        if(ar[i]>m)
        {
           con++;
        }
        if(ar[i]==m)
        {
            pk=1;
        }


    }
    //cout<<"ss"<<endl;

    //cout<<"p="<<p<<endl;
    if(con>k)
    {
        cout<<"NO"<<endl;
    }
    else if(con<k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(k>=1||pk==1)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}