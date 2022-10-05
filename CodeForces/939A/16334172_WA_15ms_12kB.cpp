#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    int a1=0;
    a1=ar[0];
    //cout<<"a1="<<a1<<endl;
    int b1=0;
    b1=ar[a1-1];
    int c1=0;
    c1=ar[b1-1];
    if(ar[c1-1]==a1)
    {
        cout<<"YES"<<endl;

    }
    else
        cout<<"NO"<<endl;

    return 0;
}
