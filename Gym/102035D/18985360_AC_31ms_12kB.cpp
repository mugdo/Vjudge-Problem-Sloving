#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,s;
    cin>>n>>a>>b>>s;
    int mi=(n-1)*a+b;
    int mx=(n-1)*b+a;
    if(s<=mx&&s>=mi)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}