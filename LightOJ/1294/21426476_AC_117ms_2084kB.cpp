#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n,m;
        cin>>n>>m;
        long long int sum=0;
        sum=(n*m)/2;
        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }
    return 0;
}
