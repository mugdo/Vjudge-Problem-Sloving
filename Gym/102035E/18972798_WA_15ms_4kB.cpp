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
        cin>>ar[i];
        if(ar[i]>m)
            con++;
    }
    if(con<=k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
