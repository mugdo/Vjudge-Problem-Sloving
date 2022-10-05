#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        long long int sum=0;
        sum=n*m;
        cout<<"Case "<<i+1<<": "<<sum/2<<endl;
    }
    return 0;
}
